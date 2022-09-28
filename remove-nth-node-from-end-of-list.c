class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* current=head;
        ListNode* currentLen=head;
        ListNode* del_next=NULL;
        ListNode* toDelete=NULL;
        ListNode* temp=NULL;
        int c=1;
        int len=0;
        if(head==NULL)
        {
            return NULL;
        }
        while(currentLen!=NULL)
        {
          currentLen=currentLen->next;
          len++;
        }
        if(len-n==0)
        {
           temp=head;
           head=head->next;
           delete temp;
           return head;
        }
        while(current!=NULL)
        {
              if(c==len-n)
            {
                toDelete=current->next;
                del_next=toDelete->next;
                current->next=del_next;
                break;

            }
            current=current->next;
            c++;

        }
        return head;
    }
};

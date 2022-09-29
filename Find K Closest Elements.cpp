class Solution {
public:
    static bool sortPaireArray(const pair<int,int> &a,
              const pair<int,int> &b)
    {
        if(a.second==b.second)
        {
            return a.first<b.first;
        }
        return a.second<b.second;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<pair<int,int>> vdif;
        for(int i=0;i<arr.size();i++)
        {
            pair<int,int> difvecele;
            difvecele.first=arr[i];
            difvecele.second=abs(arr[i]-x);
            vdif.push_back(difvecele);
            
        }
        sort (vdif.begin(),vdif.end(),(sortPaireArray));
         vector<int> result;
        for (int j=0;j<k;j++)
        {
            result.push_back(vdif[j].first);
        }
        sort(result.begin(),result.end());
        return result;
    }
      
};

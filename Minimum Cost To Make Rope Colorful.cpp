class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int curMax=0;
        int time=0;
        int removedElement=-1;
        int n=neededTime.size();
        int flags[1000000]={0};
        for(int i=1;i<n;i++)
        {
             if(colors[i-1]==colors[i])
            { 
                time+=min(neededTime[i],neededTime[i-1]);
                neededTime[i]=max(neededTime[i],neededTime[i-1]);
                
            }
        }
        return time;
    }
};

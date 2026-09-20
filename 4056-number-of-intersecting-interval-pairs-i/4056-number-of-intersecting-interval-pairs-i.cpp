class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int ans=0;
        for(int  i=0;i<n-1;i++){
            int maxi=intervals[i][1];
            int mini=intervals[i][0];
            for(int j=i+1;j<n;j++){
                if(intervals[j][0]>=mini && intervals[j][0]<=maxi){
                    ans++;
                }
                else if(intervals[j][1]>=mini && intervals[j][1]<=maxi){
                    ans++;
                }
                else if(mini>=intervals[j][0] && mini<=intervals[j][1]){
                    ans++;
                }
                
            }
        }
        return ans;        
    }
};
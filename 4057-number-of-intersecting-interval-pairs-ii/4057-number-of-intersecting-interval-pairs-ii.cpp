class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        long long ans=0;
        for(int  i=0;i<n-1;i++){
            int start=i;
            int end=n-1;
            int diff=0;
            while(start<=end){
                int mid=end-(end-start)/2;
                if(intervals[mid][0]<=intervals[i][1]){
                    diff=mid-i;
                    start=mid+1;

                }
                else{
                    end=mid-1;
                }
                
            }
            ans+=diff;
        }
        return ans;
        
    }
};
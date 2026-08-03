class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>ans;
        int top=0;
        int bottom=row-1;
        int left=col-1;
        int right=0;
        while(top<=bottom && right<=left){
            for(int i=right;i<=left;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][left]);
            }
            left--;
            if(top<=bottom){
            for(int i=left;i>=right;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            if(right<=left){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][right]);
            }
            right++;
            }
        }
        return ans;
        
    }
};
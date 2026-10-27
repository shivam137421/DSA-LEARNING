class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans(m);
        string row1="";
        string other_row="";
        for(int i=0;i<n;i++){
            row1.push_back('.');
            if(i==n-1){
                other_row.push_back('.');
            }
            else{
            other_row.push_back('#');
            }
        }
        ans[0]=row1;
        for(int i=1;i<m;i++){
            ans[i]=other_row;
        }
        return ans;
        
    }
};
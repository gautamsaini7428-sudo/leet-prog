class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector< vector<int>>ans;
        for(int row=0;row<numRows;row++){
            vector<int>ansRow(row+1,1);
            for(int col=1;col<row;col++){
                ansRow[col]=ans[row-1][col-1]+ans[row-1][col];
            }
            ans.push_back(ansRow);
        }
        return ans;
    }
};
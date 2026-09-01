class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        int c=m-1;
        int r=0;
        while(c>=0 && r<n) {
            if(target==matrix[r][c])
            return true;
           else if(target<matrix[r][c]){
                c--;
            }
            else{
                r++;
            }

        }
        return false;
        
    }
};
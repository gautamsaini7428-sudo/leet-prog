class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int n = matrix.size();
        int colbegin = 0, colend = matrix[0].size() - 1;
        int rowbegin = 0, rowend = n - 1;
        while (rowbegin <= rowend && colbegin <= colend) {
            for (int j = colbegin; j <= colend; j++) {
                result.push_back(matrix[rowbegin][j]);
            }
            rowbegin++;
            for (int j = rowbegin; j <= rowend; j++) {
                result.push_back(matrix[j][colend]);
            }
                colend--;
            if (rowbegin <= rowend) {
                for (int j = colend; j >= colbegin; j--)
                    result.push_back(matrix[rowend][j]);
                rowend--;
            }

            // Traverse Up
            if (colbegin <= colend) {
                for (int i = rowend; i >= rowbegin; i--)
                    result.push_back(matrix[i][colbegin]);
                colbegin++;
            }
        }
        return result;
    }
};
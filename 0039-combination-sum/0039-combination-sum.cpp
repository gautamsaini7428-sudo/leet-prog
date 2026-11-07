class Solution {
public:
    void getCombinations(vector<int>& arr, int idx, int target,
                         vector<vector<int>>& ans, vector<int>& combin) {
        if (target == 0) {
            ans.push_back(combin);
            return;
        }
        if (idx == arr.size() || target < 0) {
            return;
        }

        // pick (stay at idx, since the same element can be reused)
        combin.push_back(arr[idx]);
        getCombinations(arr, idx, target - arr[idx], ans, combin);
        combin.pop_back();

        // skip (move to next element)
        getCombinations(arr, idx + 1, target, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combin;
        getCombinations(arr, 0, target, ans, combin);
        return ans;
    }
};
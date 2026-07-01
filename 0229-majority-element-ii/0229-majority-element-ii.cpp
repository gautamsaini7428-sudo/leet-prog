class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cand1 = 0, count1 = 0;
        int cand2 = 0, count2 = 0;

        // Step 1: Candidate selection
        for (int i = 0; i < n; i++) {
            if (cand1 == nums[i]) {
                count1++;
            } else if (cand2 == nums[i]) {
                count2++;
            } else if (count1 == 0 && nums[i] != cand2) {
                cand1 = nums[i];
                count1 = 1;
            } else if (count2 == 0 && nums[i] != cand1) {
                cand2 = nums[i];
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        // Step 2: Verify counts
        count1 = count2 = 0;
        for (int num : nums) {
            if (num == cand1) count1++;
            else if (num == cand2) count2++;
        }

        vector<int> result;
        if (count1 > n/3) result.push_back(cand1);
        if (count2 > n/3) result.push_back(cand2);

        return result;
    }
};

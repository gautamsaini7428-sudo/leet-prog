class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxi = max(maxi, nums[i]);
        }
        int st = maxi;
        int end = sum;
        int ans = -1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (ispossible(nums,mid,k)) {
                ans = mid;
                end = mid - 1;

            } else {
                st = mid + 1;
            }
        }
        return ans;
    }

private : bool ispossible(vector<int>& nums, int maxall, int k) {
    int painter = 1;
    int time = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (time + nums[i] <= maxall) {
            time += nums[i];
        } else {
            painter++;
            time = nums[i];
        }
    }
    
        return painter <=k;
    
}
};

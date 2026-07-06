class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb,ub;
        int n=nums.size();
        vector<int> result={-1,-1};
        //check if target exist or not;
        lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(lb==n || nums[lb]!=target){
            return result;
        }
        ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        result[0]=lb;
        result[1]=ub-1;//ub ek element just bigger than the target deta h
        return result;

        
    }
};
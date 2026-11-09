class Solution {
public:
void solve(vector<int>&nums,int i,vector<int>&ans,vector<vector<int>> &getallsubsets){
    if(i==nums.size()){
     getallsubsets.push_back(ans);
    return;
    }
    ans.push_back(nums[i]);
    solve(nums,i+1,ans,getallsubsets);
    //include
    ans.pop_back();
    while(nums.size()>i+1 && nums[i]==nums[i+1])i++;
    solve(nums,i+1,ans,getallsubsets);
    

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        vector<vector<int>>getallsubsets;
        solve(nums,0,ans,getallsubsets);
        return getallsubsets;
        
    }
};
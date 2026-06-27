class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0) return 0;
        int count=1;
        int maxcount=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]+1){
                count+=1;
                
            }
         else if(nums[i+1]!=nums[i]){
         count=1;
         }
         maxcount=max(maxcount,count);
          
        }
    return maxcount;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int longest=0;
        int count=0;
       int lsmal= INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lsmal){
                count+=1;
                lsmal=nums[i];
            }
            else if(nums[i]!=lsmal){
                count=1;
                lsmal=nums[i];
            }
        longest=max(longest,count);
        }
        return longest;
    }
    
};
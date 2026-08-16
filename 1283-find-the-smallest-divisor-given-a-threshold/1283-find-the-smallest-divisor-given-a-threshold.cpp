class Solution {
public:
int sum_of(vector<int> & nums,int div){
    int sum=0;
    int c=nums.size();
    for(int i=0;i<c;i++){
        sum+=ceil((double)nums[i]/(double)div);
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
  
    int low=1;
    int ans=-1;
    int high=*max_element(nums.begin(),nums.end());
    while(low<=high){
        int mid=low+(high-low)/2;
        if(sum_of(nums,mid)<=threshold) 
        {
            high=mid-1;
        }
        else{
            low=mid +1;
        }


    }
        return low;
    }
};
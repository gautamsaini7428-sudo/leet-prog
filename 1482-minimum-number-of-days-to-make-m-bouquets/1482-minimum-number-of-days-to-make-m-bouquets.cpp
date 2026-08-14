class Solution {
public:
 bool possible(vector<int>& bloomDay,int days,int m,int k){
    int n=bloomDay.size();
        int count=0 ,no_of_b=0;
    for(int i=0;i<n;i++){
        if(bloomDay[i]<= days){
            count++;
            if(count==k){
                no_of_b++;
                count=0;
            }
        }
        else{
          
            count=0;
        }
   

    }
      return (no_of_b>=m);
  

}

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
    if((long long)m*k >n)   return -1;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
     int ans=-1;
     while(low<=high){
        int mid= low +(high-low)/2;
        if(possible(bloomDay,mid,m,k)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }

     }
     return ans;
        
    }
 
};
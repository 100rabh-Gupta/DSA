class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if( nums.size()==1){return nums[0];}
        bool flag=0;
        int maxi=INT_MIN;
        for ( auto i:nums){
            if (i>=0){flag=1;}
            maxi=max(i,maxi);
        }
        if (flag ==0){ return maxi; }


        int sum=0;
        int ans=0;
        for ( auto i:nums){
            sum+=i;
            
            if (sum<=0){
                sum=0;
            }
            else {
                ans=max(sum,ans);
                
               
            }
             
        }
        return ans;
        
    }
};
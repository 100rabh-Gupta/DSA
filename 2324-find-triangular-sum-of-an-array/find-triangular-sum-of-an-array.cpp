class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size()-1;
        while(n){
            for (int i=0;i<n;i++){
               int c=nums[i]+nums[i+1];
                nums[i]=c%10;
               
            }
            
n--;
        }
        return nums[0];
        
    }
};
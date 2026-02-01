class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        if (n==3){
            for (int i=1;i<3;i++){sum+=nums[i];}

            return sum;
        }
        sort(nums.begin()+1,nums.end());

 return sum+nums[1]+nums[2];
    }
};
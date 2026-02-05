class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>num(n);
        for ( int i=0;i<n;i++){
            if (nums[i]>0 || nums[i]<0){
                int move=nums[i]%n;
                int index=(move+i+n)%n;
                num[i]=nums[index];

            }
            else {num[i]=0;

            }
        }
        return num;
        
    }
};
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size(),count=0;
        bool zero=0;

        while( n>0){
            if (nums[n-1]<0)count++;

             if (nums[n-1]==0) {zero=1;
            return 0;}
n--;
        }
        if ( zero!=1 && count%2) return -1;
        else return 1;
        
    }
};
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
         sort ( nums.begin(),nums.end());
         int n =nums.size();

         if ( n==1) return 0;

         int left=0,len=1;
         
        for (int right = 0; right < n; right++) {
            while ((long long)nums[left] * k < nums[right]) {
                left++;
            }
            len = max(len, right - left + 1);
        }
        
    

        
        return n-len;

        
    }
};
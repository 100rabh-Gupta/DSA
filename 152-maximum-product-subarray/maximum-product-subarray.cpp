class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        
        long long mxpd = nums[0];
        long long mnpd = nums[0];
        long long ans = nums[0];
        
        for (int i = 1; i < n; i++) {
            
            if (nums[i] < 0)
                swap(mxpd, mnpd);
            
            mxpd = max((long long)nums[i], mxpd * nums[i]);
            mnpd = min((long long)nums[i], mnpd * nums[i]);
            
            ans = max(ans, mxpd);
        }
        
        return (int)ans;        
    }
};
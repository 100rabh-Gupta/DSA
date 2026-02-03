class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;
        int start=0, end=0;
        while(start<nums1.size() && end<nums2.size()){
            if(nums1[start]<=nums2[end]){
                ans=max(ans ,end-start);
                end++;
                
            }
            else start++;
        }
        
        return ans;
        
    }
};
class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
       
        int ans=0;

        for (int i = 0; i < n; i++) {
            unordered_set<int> eset;
            unordered_set<int> oset;
            for ( int j=i;j<n;j++){
                if(nums[j]%2) oset.insert(nums[j]);
                else eset.insert(nums[j]);

                if (oset.size()==eset.size()){ans=max(ans,j-i+1);}

            }

        }
        


        return ans;
        
    }
};
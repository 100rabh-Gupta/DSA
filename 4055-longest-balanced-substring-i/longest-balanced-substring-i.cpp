class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
         vector<int> cnt(26, 0);
         int diff = 0,mxfeq=0;
            for (int j = i; j < n; j++) 
            {
                int ind=s[j]-'a';
                     if (cnt[ind] == 0)
                    diff++;

                cnt[ind]++;
                  mxfeq = max(mxfeq, cnt[ind]);

                       int length = j - i + 1;

                        if (length == diff * mxfeq) {
                    ans = max(ans, length);
               
        
                }
            }
        }
        return ans;
    }
};
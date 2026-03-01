class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);

        for(int i=1;i<=n;i++){
            int count=0;
            int l=i;
            while(l){
                if (l%2){count++;}

                l/=2;
            }
            ans[i]=count;
            
        }
        return ans;
        
    }
};
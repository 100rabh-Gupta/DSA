class Solution {
public:
    int minDays(vector<int>& day, int m, int k) {
        int start=INT_MAX,end=INT_MIN,n=day.size();
        if ((double)m*k>n)return -1;

        for ( int i=0; i<n;i++){
            start=min(start,day[i]);
            end=max( end,day[i]);
        }
        int ans;

        while( start<= end){

            long long mid =start+(end-start)/2,count=0,boukey=0;
            for ( int i=0;i<n;i++){
                 if ( mid>=day[i])count++;
                 else {boukey+=count/k;
                 count=0;}

            }
            if ( count>=k){
                boukey+=count/k;  
            }

            if ( boukey>=m){

                end=mid-1;
                ans=mid;
            }
            else start=mid+1;
            }

return ans;
        
    }
};
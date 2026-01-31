class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=INT_MIN,n=nums.size();
        
        for ( int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);

        }
        int value =-1;
        if ( threshold==n)return maxi;
        
       int start=1,end=maxi;
       while(start<=end){
        int mid=start+(end-start)/2;

               int sum=0;
            for ( int i=0;i<n;i++){
                 sum+=ceil((double)nums[i]/(double)mid);
                }

        if (sum<=threshold) {
            value=mid;
        end=mid-1;
        }

        else {start=mid+1;}
        }
        return value;
    }
};
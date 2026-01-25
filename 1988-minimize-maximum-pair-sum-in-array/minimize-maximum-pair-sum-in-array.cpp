class Solution {
public:
    int minPairSum(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        int ans= INT_MIN;
        int start=0,end=arr.size()-1;
        while(start<end){
            ans=max(ans,arr[start++]+arr[end--]);


        }
        return ans;

        
    }
};
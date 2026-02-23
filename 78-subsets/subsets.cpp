class Solution {
public:

void subsequnces(vector<int>array,int n,int ind, vector<vector<int>>&ans,vector<int>&temp){
    if ( n==ind){ans.push_back(temp);
    return;}
    subsequnces(array,n,ind+1,ans,temp);
    temp.push_back(array[ind]);
    subsequnces(array,n,ind+1,ans,temp);
    temp.pop_back();



}
    vector<vector<int>> subsets(vector<int>& nums) {

vector<vector<int>>ans;
vector<int>temp;
subsequnces(nums,nums.size(),0,ans,temp);
return ans;
        
    }
};
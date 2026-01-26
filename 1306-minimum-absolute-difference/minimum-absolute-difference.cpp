class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
       

        sort( arr.begin(),arr.end());
        int pdiff = INT_MAX;
        for ( int i=1;i<arr.size();i++){
            
          int  cdiff=arr[i]-arr[i-1];

            if ( pdiff>cdiff){
                pdiff =cdiff;
                ans.clear();
                ans.push_back({arr[i-1],arr[i]});

            }
            else {if(pdiff==cdiff){
                    ans.push_back({arr[i-1],arr[i]});
                }
            }

         

        }
         
            
          
        
        return ans;
        
    }
};
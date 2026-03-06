class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans=0;
        for ( int i=0;i< mat.size();i++){
            for ( int j=0;j< mat[0].size();j++){

                if (mat[i][j]==1){
                      bool flag = 1;
                    for ( int l=0;l<mat.size();l++){
                        if (l!=i && mat[l][j]==1){
                            flag=0;
                            break;
                        }
            }

                    for (int l=0;l< mat[0].size();l++){
                        if (l!=j && mat[i][l] == 1 ){
                            flag=0;
                            break;  
                        }
                    }
                if (flag==1)ans++;
                }
            }
        }
        return ans;
        
    }
};
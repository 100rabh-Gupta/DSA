#include<iostream>
#include<vector>
using namespace std;
void parathesis(int n,int l,int r, vector<string>&ans,string &temp){
    if ( l+r==2*n){ans.push_back(temp);
    return;}
    if ( l<n){
         temp.push_back('(');
         parathesis(n,l+1,r,ans,temp);
         temp.pop_back();
    }

   if ( l>r){
     temp.push_back(')');
         parathesis(n,l,r+1,ans,temp);
         temp.pop_back();
   }


}




int main (){
   

   
   int n;
   cout<<"Enter no of paraathesis : ";
   cin>>n;

  

    vector<string>ans;
    string temp;
    parathesis(n,0,0,ans,temp);
    cout<<"All the valid parathesis are :"<<endl;
    
    for (int i = 0; i < ans.size(); i++) {
       
        cout<<ans[i]<<endl;
    }





}

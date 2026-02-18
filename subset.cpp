#include<iostream>
#include<vector>
using namespace std;
void subset(string &s,int n,int ind, vector<string>&ans,string &temp){
    if ( n==ind){ans.push_back(temp);
    return;}
    subset(s,n,ind+1,ans,temp);
    temp.push_back(s[ind]);
    subset(s,n,ind+1,ans,temp);
    temp.pop_back();



}




int main (){
   

   
    string s;
    cout << "Enter string : ";
    cin>> s;

  

    vector<string>ans;
    string temp;
    subset(s,s.size(),0,ans,temp);
    cout<<"All the sub sequences of string are :";
    
    for (int i = 0; i < ans.size(); i++) {
       
        cout<<ans[i]<<endl;
    }





}

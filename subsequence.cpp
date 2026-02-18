#include<iostream>
#include<vector>
using namespace std;
void subsequnces(int array[],int n,int ind, vector<vector<int>>&ans,vector<int>&temp){
    if ( n==ind){ans.push_back(temp);
    return;}
    subsequnces(array,n,ind+1,ans,temp);
    temp.push_back(array[ind]);
    subsequnces(array,n,ind+1,ans,temp);
    temp.pop_back();



}




int main (){
      cout << "Enter size of arr: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter Element of arr using space : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>>ans;
    vector<int>temp;
    subsequnces(arr,n,0,ans,temp);
    cout<<"All the sub sequences of array are :"<<endl;
    
    for (int i = 0; i < ans.size(); i++) {
        cout << "{";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << "";
        }
       
        cout << "}\n";
    }





}

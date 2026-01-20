#include<iostream>
using namespace std;

int prod(int arr[],int ind){
    
    if ( ind==0){
        return arr[0];
    }

    return arr[ind]* prod( arr,ind-1);
}
void Print( int n,int arr[],int index){
    if (index==n) return ;

    cout<<arr[index]<<" ";
    Print( n,arr,index+1);
}

int main(){

     int arr[]={2,4,1,6,5};
    int n=sizeof(arr)/ sizeof(arr[0]);
    cout<<"Array : ";
     Print(n,arr,0);

     cout<<endl<<prod(arr,n-1);
    
    }
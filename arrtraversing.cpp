#include<iostream>
using namespace std;
void PrintR( int n,int arr[],int index){
    if ( index==n)
    return;
    
    
    PrintR(n,arr,index+1);
    cout<< arr[index]<<" ";
    

}
void PrintRev( int arr[],int index){
    if ( index==0){
    cout<<arr[0];
    return;}
    
    cout<< arr[index]<<" ";
    PrintRev(arr,index-1);
    

}



void Print( int n,int arr[],int index){
    if ( index==n)
    return;

        cout<< arr[index]<<" ";
    
    Print(n,arr,index+1);
  
    

}


int main(){

    int index=0;
    int arr[]={2,4,1,6,5};
    int n=sizeof(arr)/ sizeof(arr[0]);
    cout<<"Array : ";
     Print(n,arr,0);
     cout<<endl<<"Array : ";
       Print(n,arr,0);
  

    cout<<endl<<"Reverse array: ";
    PrintR(n,arr,0);
     cout<<endl<<"Reverse array: ";
      PrintRev(arr,n-1);



}

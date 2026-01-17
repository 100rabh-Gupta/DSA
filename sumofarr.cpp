#include<iostream>
using namespace std;
void Print(int n, int arr[], int index)
{
    if (index == n)
        return;

    cout << arr[index] << " ";
    Print(n, arr, index + 1);
}
int arrsum( int arr[],int index){
    if (index==0){ return arr[0];}
    return arr[index] + arrsum(arr,index-1);
}
int arrmin( int arr[],int index){ 
    if (index<0){ return arr[0];}
    return(min(arr[index],arrmin(arr,index-1)));

}
int main()
{

    
    int arr[] = {2, 4, 1, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array : ";
    Print(n, arr, 0);
    
    cout<<endl<<"Array Sum : "<<arrsum(arr,n-1);


      cout<<endl<<"Array Minimum element : "<<arrmin(arr,n-1);



}
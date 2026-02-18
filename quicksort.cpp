#include<iostream>
using namespace std;

int partition( int arr[],int start,int end ){
     int pos= start;
     for ( int i=start;i<=end;i++){
        if ( arr[i]<=arr[end]){
            swap( arr[pos],arr[i]);
            pos++;
        }
     }
     return pos-1;
}

void quicksort(int arr[],int start,int end){

    if (start>=end)return;

    else {
        int pivot = partition( arr,start,end);
        quicksort(arr,start,pivot-1);
        quicksort(arr,pivot+1,end);

    }
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
quicksort(arr,0,n-1);
     cout<< "Element of array after sorted : ";
    for (int i = 0; i < n; i++){cout<<arr[i]<< " ";}
}
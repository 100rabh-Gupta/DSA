#include<iostream>
using namespace std;


void merge(  int arr[],int start, int end ,int mid  ){
      int left=start , right =mid +1  , ind=0;
       int temp[end-start+1];
       while( left<=mid && right<= end){
         if ( arr[left] <= arr[right] ){
            temp[ind]=arr[left];
            ind++,left++;
         }
         else{ temp[ind]=arr[right];
            ind ++ ; right++;
         
        }
    }
        while ( right <= end ){
            temp[ind]=arr[right];
            ind ++ ; right++;
             
        }
        while ( left<= mid)
        {temp[ind]=arr[left];
            ind++;
            left++;}
        
       ind=0;
       while( ind <=end){
        arr[ start]=temp[ind];
        start++;ind++;
         
       }

}


void mergesort(int arr[],int start,int end){
    if ( start==end){
        return;
    }
    int mid= start+((end-start)/2);
        mergesort(arr,start,mid);
        mergesort( arr,mid+1,end);
        merge(arr,start,end,mid);

}



int main (){
      cout << "Enter size of arr: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter Element of arr using space : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    mergesort( a,0,n-1);
    cout<< "Element of array after sorted : ";
    for (int i = 0; i < n; i++){cout<<a[i]<< " ";}
}

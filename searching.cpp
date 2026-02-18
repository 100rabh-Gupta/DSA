#include <iostream>
using namespace std;
void linearseach(int arr[], int ind, int x)
{
    if (ind == -1)
    {
        cout << "not found using Linear search"<<endl;
        return;
    }

    if (arr[ind] == x)
    {
        cout << "Element " << x << " founded  using linear search at index " << ind<<endl;
        return;
    }
    linearseach(arr, ind - 1, x);
}
void binarysearch( int arr[],int start,int end, int x){
     if ( start>end) {cout << "Not found using Binary search"<<endl;
     return;}
     int mid = start+ (end-start)/2;
    
     if ( arr[mid]==x){
        cout << "Element " << x << " founded  using Binary search at index " << mid;
        return;
    }
    else if( arr[mid]>x){
        binarysearch( arr,start,mid-1,x);

    }
    else 
    binarysearch( arr,mid+1,end,x);
}
int main()
{
    cout << "Enter size of arr: ";
    int n;
    cin >> n;
    int a[n];
    cout << "Enter Element of arr using space : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<< "Enter element to found : "; 
    int x;
    cin >> x;
    linearseach(a, n - 1, x);
    binarysearch(a, 0 ,n - 1, x);


    

}

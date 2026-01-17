
#include<iostream>
using namespace std;
void Print( int n){
   
    if ( n==1){cout<<1<<endl; 
    return;}

    Print ( n-1);
    cout<<n<<endl;
    

    
}

int main(){
    Print(100);}

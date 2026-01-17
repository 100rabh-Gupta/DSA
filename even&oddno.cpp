#include<iostream>
using namespace std;
void evenno( int n){
    if ( n==2){cout<<2<<endl; return;}

    if (n%2)n--;
    
    evenno(n-2);
    cout<<n<<endl;
}

void oddno( int n){
    if ( n==1){cout<<1<<endl; return;}

    if (n%2==0)n--;
    
    oddno(n-2);
    cout<<n<<endl;
}


int main(){
    evenno(5);

    oddno(7);

}
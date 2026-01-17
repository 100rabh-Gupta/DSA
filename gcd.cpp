#include<iostream>
using namespace std;

int gcd(int a,int b){
    if ( a<b) swap ( a,b);
    if (b==0)return a;

    return gcd(b,a%b);
}

int main (){
    int a,b;
    cout<<"Enter A and B : ";

    cin>>a>>b;
    cout<<gcd( a,b);
}
#include<iostream>
using namespace std;
void Print( int n){
    if (n==0){
    cout<<"happy birthday"<<endl;
    return;

    }
    cout<<n<<" days to go "<<endl;
    Print(n-1);
}
int main(){
    Print(5);
}
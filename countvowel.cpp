#include<iostream>
using namespace std;
int vowelcnt( string &s,int ind){
    if ( ind==-1) return 0;

    if ( s[ind]=='a'||s[ind]=='e'||s[ind]=='i'||s[ind]=='o'||
        s[ind]=='o'||s[ind]=='A'||s[ind]=='E'||s[ind]=='I'||s[ind]=='O'||s[ind]=='U'){
         return 1+ vowelcnt( s, ind-1) ;
        }
        else 
         return vowelcnt( s, ind-1) ;
}
int main ( ){
     string s ;
     cout<< " Enter string :";
     getline( cin, s);
     cout << "No of vowel in the string  : "<< vowelcnt( s,s.length()-1);

}
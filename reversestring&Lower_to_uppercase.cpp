#include<iostream>
using namespace std;
void rever(string & s, int start, int end ){
    if ( start>=end){
        return ;}
         char temp = s[start];
        s[start]= s[end];
        s[end]= temp;

       rever( s ,start+1,end-1);
    
}

void touppercase( string &s, int ind){
     if ( ind ==-1) return ; 
      s[ind]=s[ind]-'a'+'A';
     touppercase( s,ind-1);
}
int main( ){
     string s;
     cout<<" Enter string : ";
     cin>> s;

     
      cout<<"Before string reverse: "<< s<< endl;
      rever( s,0,s.length()-1);
      cout<<"After  string reverse: "<< s<< endl;
touppercase( s, s.length()-1);
      cout<<"Converting string to uppercase : "<<s;


}

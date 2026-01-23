#include<iostream>
using namespace std;
bool pal(string s, int start, int end ){
    if ( start>=end){
        return 1;
    }
if (s[ start]!=s[end]){
    return 0 ;

}
return pal( s,start+1,end-1);



}

int main (){
     string l = "naman";
     cout<< pal(l,0,l.length()-1);
     cout<< (l.length());
}
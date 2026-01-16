class Solution {
public:
    int strStr(string haystack, string needle) {
        int first=0;
        if (needle == "") return 0;
        int second=0;
        int index=-1;
        while(haystack.size()>first){
            int start=first ;
            second=0;

           while ( second<needle.size()&&
           haystack.size()>first&&
           haystack[first]==needle[second] ){
            first++; second++;
                
            }
            if (second==needle.size()){
            index=first-second;
            break;}

             first = start + 1;
        }
        return index;
        
    }
};
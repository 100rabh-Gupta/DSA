class Solution {
public:
    int minimumDeletions(string s) {

        int count=0;
        int bcnt=0;
        for ( char c:s){
            if ( c=='b')bcnt++;
            else  count=min( count+1,bcnt);
        }
        return count;
        
    }
};
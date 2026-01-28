class Solution {
public:
    bool isPerfectSquare(int num) {
        bool f=false;
        long long i;
        for( i=0;i*i<=num;i++){
            if ( i*i==num){
                f=true;
                break;
            
            }
        }
        return f;

        
    }
};
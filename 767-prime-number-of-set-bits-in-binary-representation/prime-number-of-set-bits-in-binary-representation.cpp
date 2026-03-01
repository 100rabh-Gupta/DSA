class Solution {
public:

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    
    if (n % 2 == 0) return false;  // eliminate even numbers
    
    for (int i = 3; i * i <= n; i ++) {
        if (n % i == 0){
            return false;}
    }
    
    return true;
}

    int countPrimeSetBits(int left, int right) {
      int ans=0;
        
    for ( int i=left;i<=right;i++){
      int count=0;
      int l=i;
      while( l){
        if ( l%2){count++;}
        l=l/2;

        }
        if (isPrime(count)){
        ans++;}
    }
    return ans;
    }
};
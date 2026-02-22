class Solution {
public:
    int addDigits(int num) {
        int ans=11;
        while(ans>9){
       int sum=0;
       while(num){
        sum+=num%10;
        num/=10;
       }
       num=sum;
       ans=num;}
       return ans;

       
        
    }
};
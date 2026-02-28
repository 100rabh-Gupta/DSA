class Solution {
public:
    int numSteps(string s) {
        int count = 0;
        int carry =0;
        long long value = 0;
        for (int i = s.size() - 1; i > 0; i--) {
char c=s[i]-'0';
            
      
            if (c+carry==1) {
                count+=2;
                carry=1;
            } else{
            

            count+=1;}
        }
        return count+carry;
    }
};
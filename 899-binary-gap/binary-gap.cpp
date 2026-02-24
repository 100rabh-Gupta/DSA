class Solution {
public:
    int binaryGap(int n) {
                int last = -1;      // position of last seen 1
        int maxDist = 0;
        int position = 0;

        while (n > 0) {
            if (n & 1) {   // check if current bit is 1
                if (last != -1) {
                    maxDist = max(maxDist, position - last);
                }
                last = position;
            }
            n >>= 1;       // shift right
            position++;
        }

        return maxDist;
    

        
    }
}; 
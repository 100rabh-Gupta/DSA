class Solution {
public:
       bool isNonDecreasing(vector<int>& arr) {
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < arr[i - 1])
                return false;
        }
        return true;
         }
         
    int minimumPairRemoval(vector<int>& nums) {

  

        vector<int> arr = nums;
        int ops = 0;

        while (!isNonDecreasing(arr)){
            int idx = 0;
            int minSum = arr[0] + arr[1];

            for (int i = 1; i < arr.size() - 1; i++) {
                int sum = arr[i] + arr[i + 1];
                if (sum < minSum) {
                    minSum = sum;
                    idx = i;
                }
            }

            // Merge the pair
            arr[idx] = minSum;
            arr.erase(arr.begin() + idx + 1);
            ops++;
        }

        return ops;
        
    }
};
class Solution {
public:

void merge(vector<int>& num, int start, int mid, int end){
             int left = start, right = mid+1,ind=0;
             vector<int> temp(end-start+1);


             while( left<=mid && right <=end){
              if(  num[left]<num[right]){
                temp[ind]=num[left];
                left++;ind++;
              }

              else {
                temp[ind]=num[right];
                right++;ind++;
              }
             }
             while( left<=mid){
                
                temp[ind]=num[left];
                left++;ind++;
              
             }

             while( right <=end){
                temp[ind]=num[right];
                right++;ind++;
             }

                ind =0;
                while( ind<temp.size()){
                num[start]=temp[ind];
                ind++;start++;
             }
         }
         void mergesort(vector<int>& num, int start,int end ){
            if ( start>=end)return;
            int mid = start+ ((end-start)/2);
            mergesort(num,start,mid);
            mergesort(num,mid+1,end);
            merge( num,start,mid,end);
        }

    vector<int> sortArray(vector<int>& nums) {
int  start=0;
vector<int>num=nums;
       mergesort( num,start,nums.size()-1);

         
         return num;
        
    }
};
class Solution {
public:
    bool checkOnesSegment(string s) {
        // if (s.size()<=3)return true;
        bool zero=0;
    
      
        
        for ( int i=0;i<s.size();i++){
            if (s[i]=='0')zero=1;
            if (s[i]=='1'&& zero){
              return false;
            }
        }
       return true;
     



        
    }
};
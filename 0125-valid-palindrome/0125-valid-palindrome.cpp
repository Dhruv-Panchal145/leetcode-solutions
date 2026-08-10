class Solution {
public:
  
  bool isAlphanumric(char ch) {
    if(ch >= '0' && ch <= '9' ||
         (tolower(ch)) >= 'a' && (tolower(ch)) <= 'z'){
            return true;
         }
         return false;
  }


    bool isPalindrome(string s) {
        int st = 0, ed = s.size() - 1;
        while(st < ed) {
            // if is check for this vaules $,3,@ 
            if(!isAlphanumric(s[st])){
                st++; continue;
            }
          // if is check for this vaules $,3,@ 
            if(!isAlphanumric(s[ed])) {
                ed--; continue;
            }
            //its check not euqal to both string then not palindeome false
          if(tolower(s[st]) != tolower(s[ed])) {
            return false;
           }
           st++; ed--;
            
        }
        return true;
    }
};
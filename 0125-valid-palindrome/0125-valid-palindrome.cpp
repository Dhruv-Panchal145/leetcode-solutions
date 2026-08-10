class Solution {
public:
  
  bool isAlphanumric(char ch) {
    if((ch >= '0' && ch <= '9') ||
         (tolower(ch)) >= 'a' && (tolower(ch)) <= 'z'){
            return true;
         }
         return false;
  }


    bool isPalindrome(string s) {
        int st = 0, ed = s.size() - 1;
        while(st < ed) {
            if(!isAlphanumric(s[st])){
                st++; continue;
            }
            if(!isAlphanumric(s[ed])) {
                ed--; continue;
            }
          if(tolower(s[st]) != tolower(s[ed])) {
            return false;
           }
           st++; ed--;
            
        }
        return true;
    }
};
class Solution {
public:
    bool isValid(string str) {
        stack<char> st;

       for(int i = 0; i < str.size(); i++){
          if(str[i] == '(' || str[i] == '[' || str[i] == '{'){ // opening condition
               st.push(str[i]);
          } else { // closing condition
              if(st.size() == 0) {  // opening > closing
                 return false;
              }
               
               if( (st.top() == '(' && str[i] == ')') || 
                    (st.top() == '{' && str[i] == '}') ||
                     (st.top() == '[' && str[i] == ']') 
               ){
                    st.pop(); 
               } else {
                return false;
               } 
          }
       }
       return st.size() == 0;
    }
};
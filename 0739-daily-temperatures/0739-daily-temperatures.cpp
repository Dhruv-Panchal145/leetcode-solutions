class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        int n = temps.size();
        stack<int> st;
        vector<int> result(n);

        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && temps[i] >= temps[st.top()]){
                st.pop();
            }
            if(st.empty()){
               result[i] = 0;
            }else{
                result[i] = st.top() - i; //days
            }
            st.push(i);
        }
        return result;
    }
};
class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
    int n = arr.size();
    stack<int> st;
    int maxArea = 0;

    // Part 1: har bar pe check karo, chhoti aayi to top ka rectangle toot gaya
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] > arr[i]) {
            int element = st.top();
            st.pop();
            int nse = i;
            int pse = st.empty() ? -1 : st.top();
            maxArea = max(arr[element] * (nse - pse - 1), maxArea);
        }
        st.push(i);
    }

    // Part 2: stack mein bachi bars ka next smaller koi nahi, to nse = n
    while (!st.empty()) {
        int nse = n;
        int element = st.top();
        st.pop();
        int pse = st.empty() ? -1 : st.top();
        maxArea = max(maxArea, (nse - pse - 1) * arr[element]);
    }

    return maxArea;

    }
};
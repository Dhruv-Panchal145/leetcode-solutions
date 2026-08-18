class Solution {
public:
    bool isValid(vector<int>& quantities, int n, int maxProducts) {
        int storesNeeded = 0;
        for (int q : quantities) {
            storesNeeded += (q + maxProducts - 1) / maxProducts; // ceil(q / maxProducts)
        }
        return storesNeeded <= n;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int st = 1;
        int ed = *max_element(quantities.begin(), quantities.end());
        int ans = ed;

        while (st <= ed) {
            int mid = st + (ed - st) / 2;
            if (isValid(quantities, n, mid)) {
                ans = mid;
                ed = mid - 1; // try smaller
            } else {
                st = mid + 1; // need more space per store
            }
        }
        return ans;
    }
};
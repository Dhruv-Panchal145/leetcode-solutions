class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
               sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        // Skip duplicate values for i
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        for (int j = i + 1; j < n; j++) {
            // Skip duplicate values for j (must check j > i + 1)
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;

            int p = j + 1, q = n - 1;
            while (p < q) {
                long long sum = (long long)nums[i] + nums[j] + nums[p] + nums[q];

                if (sum < target) {
                    p++;
                } else if (sum > target) {
                    q--;
                } else {
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++;
                    q--;

                    // Skip duplicates for p and q
                    while (p < q && nums[p] == nums[p - 1]) p++;
                    while (p < q && nums[q] == nums[q + 1]) q--;
                }
            }
        }
    }
    return ans;        
    }
};
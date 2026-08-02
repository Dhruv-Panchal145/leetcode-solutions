class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
            // Sort the array first - foundation for two pointer and duplicate skipping
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

    // Fix one element using i
        for(int i = 0; i < n; i++) {

        // Skip duplicate i - same element already processed before
            if(i > 0 && nums[i] == nums[i-1]) continue;

        // Set two pointers
            int j = i+1, k = n-1;

                    // Run until j and k cross each other
            while(j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                            // Move pointers based on sum
                if(sum < 0) { // sum too small - bring j right
                    j++;
                } else if(sum > 0) {  // sum too large - bring k left
                    k--;
                }else {    // Found a triplet - add to answer
                    ans.push_back({nums[i],nums[j],nums[k]});

                    // Move both pointers inward
                    j++,k--;

                // Skip duplicates on both sides after finding answer
                    while(j < k && nums[j] == nums[j-1]) {
                        j++;
                    }
                    while(j < k && nums[k] == nums[k+1]) {
                        k--;
                    }
                }

            }
        }
         return ans;
    }
};
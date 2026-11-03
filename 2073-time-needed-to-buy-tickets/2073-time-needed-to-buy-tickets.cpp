class Solution {
public:
    int timeRequiredToBuy(vector<int>& nums, int k) {
        int time = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(i <= k){
            time += min(nums[i], nums[k]);
            } else {
                time += min(nums[i], nums[k] - 1);
            }
        }
    return time;
    }
};
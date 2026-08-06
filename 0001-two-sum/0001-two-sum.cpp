class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
         unordered_map<int,int> m;
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            int comp = target - nums[i];
            if(m.count(comp)){
            ans.push_back(m[comp]);
            ans.push_back(i);
      break;
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};
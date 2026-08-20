class Solution {
public:
    set<vector<int>> s; // used for unique combinations
void getAllCombination(vector<int> &arr,int idx, int tar, vector<vector<int>> &ans, vector<int> &combin){
    if(idx == arr.size() || tar < 0){
        return;
    }
    if(tar == 0){
        if(s.find(combin) == s.end()){
            ans.push_back(combin);
            s.insert(combin);
        }
    }

    combin.push_back(arr[idx]);
    //single time include element
    getAllCombination(arr,idx+1,tar-arr[idx],ans,combin);
    //multiple time include element
    getAllCombination(arr,idx,tar-arr[idx],ans,combin);
    //not include any element 
    combin.pop_back();
    getAllCombination(arr,idx+1,tar,ans,combin);


}
    vector<vector<int>> combinationSum(vector<int>& arr ,int target) {
        vector<vector<int>> ans;
        vector<int> combin;
           getAllCombination(arr,0,target,ans,combin);
           return ans;
    }
};
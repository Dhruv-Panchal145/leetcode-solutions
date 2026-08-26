class Solution {
public:

void helper(vector<int>& arr,vector<int>& current,int i, vector<vector<int>>& result){
    if(i == arr.size()){
        result.push_back(current);
        return;
    }

    //include
    current.push_back(arr[i]);
    helper(arr,current,i+1,result);
    //exclude
    current.pop_back();
    helper(arr,current,i+1,result);
}

    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> result;
        vector<int> current;
        helper(arr,current,0,result);
        return result;
    }
};
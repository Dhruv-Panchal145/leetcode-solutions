class Solution {
public:

void helper(vector<int>& arr,vector<int> current, int idx,vector<vector<int>>& result){
  // base case 
  if(idx == arr.size()){
    result.push_back(current);
    return;
  }
  // include element 
  current.push_back(arr[idx]);
   helper(arr,current,idx+1,result);

   //exculde element
   current.pop_back();
    // not contain duplicate
    while(idx+1 < arr.size() && arr[idx] == arr[idx+1]){
        idx++;
    }
    helper(arr,current,idx+1,result);
}

    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
       sort(arr.begin(), arr.end());
        vector<vector<int>> result;
         vector<int> current;
          helper(arr,current,0,result);
          return result;
    }
};
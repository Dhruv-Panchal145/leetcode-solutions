class Solution {

bool ispalin(string s){
    string s2 = s;
    reverse(s2.begin(),s2.end());
    return s == s2;
}

void getAllPart(string s, vector<string> &partation, vector<vector<string>> &ans){

     if(s.size() == 0){
        ans.push_back(partation);
        return;
     }

    for(int i = 0; i < s.size(); i++){
        string part = s.substr(0,i+1);
        if(ispalin(part)){
            partation.push_back(part);
            getAllPart(s.substr(i+1),partation,ans);
            partation.pop_back();
        }
    }
}

public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partation;
        getAllPart(s,partation,ans);
        return ans;
    }
};
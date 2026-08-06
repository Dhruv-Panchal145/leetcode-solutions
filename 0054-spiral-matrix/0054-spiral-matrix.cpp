class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int srow=0,scol=0;
        int erow=n-1,ecol=m-1;

               vector<int> ans;

        while(srow <= erow && scol <= ecol){ // odd matrix
             //top
        for(int j = scol; j <= ecol; j++){
            ans.push_back(mat[srow][j]); 
        }
       //right
        for(int i = srow+1; i <= erow; i++){
            ans.push_back(mat[i][ecol]);
        }
       //bottom
        for(int j = ecol-1; j >= scol; j--){
            if(srow == erow){
                break;
            }
         ans.push_back(mat[erow][j]);
        }
       //left
      for(int i = erow-1; i >= srow+1; i--){
           if(scol == ecol){
                break;
            }
         ans.push_back(mat[i][scol]);
      }
      srow++, scol++;
      erow--, ecol--;
        }
       return ans;
    }
};
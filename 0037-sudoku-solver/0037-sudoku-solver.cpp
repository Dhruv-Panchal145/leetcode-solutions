class Solution {
public:
 
 
  bool ifSafe(vector<vector<char>>& board,int row,int col,int digit){
    //vertically
    for(int i = 0; i < 9; i++){
        if(board[i][col] == digit){
            return false;
        }
    }
    //horizotally
    for(int j = 0; j < 9; j++){
        if(board[row][j] == digit){
            return false;
        }
    }
  //3*3grid
   int startRow = (row/3)*3;
   int startCol = (col/3)*3;
   for(int i = startRow; i <= startRow+2; i++){// for starting row
    for(int j = startCol; j <= startCol+2; j++){// for starting col
         if(board[i][j] == digit){
            return false;
         }
    }
   }
      return true;
  }

   bool helper(vector<vector<char>>& board,int row,int col){
        if(row == 9){
            return true;
        } 

        int nextRow = row;
        int nextCol = col + 1;
        if(col + 1 == 9){
            nextRow = row + 1;
            nextCol = 0;
        }

        if(board[row][col] != '.'){
         return helper(board,nextRow,nextCol);
        }

        for(char digit = '1'; digit <= '9'; digit++){
            if(ifSafe(board,row,col,digit)){
               board[row][col] = digit;
               if(helper(board,nextRow,nextCol)){
                return true;
               }
               board[row][col] = '.';
            }
        }
         return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
      helper(board,0,0);        
    }
};
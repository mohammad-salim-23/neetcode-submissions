class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int row,int col,char dig)
    {
        //vertically
        for(int i=0;i<9;i++){
            if(i!=row && board[i][col]==dig){
                return false;
            }
        }
        //horizontally
        for(int j=0;j<9;j++){
            if(j!=col && board[row][j]==dig){
                return false;
            }
        }
        //grid 
        int srow = (row/3)*3;
        int scol = (col/3)*3;
        for(int i=srow;i<=srow+2;i++){
            for(int j=scol;j<=scol+2;j++){
               if((i != row || j != col) && board[i][j] == dig){
                return false;
            }
            }
        }
        return true;
    }
    // bool helper(vector<vector<char>>& board,int row,int col)
    // {
    //     if(row==9) {
    //         return true;
    //     }
    //     int nextRow = row, nextCol = col+1;
    //     if(nextCol==9){
    //         nextRow = row+1;
    //         nextCol = 0;
    //     }
    //     if(board[row][col]!='.'){
    //         return helper(board,nextRow,nextCol);
    //     }
    //     //place the digit
    //     for(char dig='1';dig<='9';dig++){
    //         if(isSafe(board,row,col,dig)){
    //             board[row][col] = dig;
    //             if(helper(board,nextRow,nextCol)){
    //                 return true;
    //             }
    //             board[row][col]='.';
    //         }
    //     }
    //     return false;
    // }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             if(board[i][j] == '.'){
                continue;
            }
            if(!isSafe(board,i,j,board[i][j])){
                return false;
            }
        }
       }
       return true;
    }
};

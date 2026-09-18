class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int startRow = 0, startCol = 0 , endRow = matrix.size()-1,endCol = matrix[0].size()-1;
        vector<int>result;
        while(startRow<=endRow && startCol<=endCol){
            //tp
            for(int j=startCol;j<=endCol;j++){
                result.push_back(matrix[startRow][j]);

            }
            //right 
            for(int i=startRow+1;i<=endRow;i++){
                result.push_back(matrix[i][endCol]);
            }
            //bottom
            for(int j=endCol-1;j>=startCol;j--){
                if(startRow==endRow) break;
                result.push_back(matrix[endRow][j]);
            }
            //left 
            for(int i=endRow-1;i>startRow;i--){
                if(startCol==endCol) break;
                result.push_back(matrix[i][startCol]);
            }
            startRow++;
            startCol++;
            endRow--;
            endCol--;
        }
        return result;
    }
};

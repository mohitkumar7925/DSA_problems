// LC-73
//https://leetcode.com/problems/set-matrix-zeroes/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool isZeroInFirstRow = false;

        for(int row = 0 ; row < matrix.size(); row++){
            if(matrix[row][0] == 0) isZeroInFirstRow = true;
            for(int col = 1; col < matrix[0].size(); col++){
                if(matrix[row][col] == 0){
                    matrix[row][0] = 0;
                    matrix[0][col] = 0;
                }
            }

        }

          for(int row = matrix.size() - 1; row >= 0; row--){
                for(int col = matrix[0].size() - 1 ; col > 0; col--){
                    if(matrix[row][0] == 0 || matrix[0][col] == 0){
                        matrix[row][col] = 0;
                    }
                }
                if(isZeroInFirstRow){
                    matrix[row][0] = 0;
                }
            }
    }
};
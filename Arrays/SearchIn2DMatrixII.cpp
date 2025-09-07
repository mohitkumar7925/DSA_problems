// LC 240
// https://leetcode.com/problems/search-a-2d-matrix-ii/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int rowMax = matrix.size(), colMax = matrix[0].size();
       int row = 0, col = colMax - 1;
       while(row < rowMax && col >= 0) {
        if(matrix[row][col] == target){
            return true;
        }else if(matrix[row][col] > target){
            col--;
        }
        else {
            row++;
        }
       }
       return false;
    }
};
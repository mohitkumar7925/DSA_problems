// LC-74
//https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = matrix.size() * matrix[0].size() - 1;
        int mid = left + (right - left)/2;
        while(left <= right){
            int row = mid / matrix[0].size();
            int col = mid % matrix[0].size();
            if(matrix[row][col] == target){
                return true;
            }
            else if (matrix[row][col] > target){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
            mid = left + ( right - left) / 2;
        }
        return false;
    }
};
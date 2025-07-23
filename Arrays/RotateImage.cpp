// LC-48
//https://leetcode.com/problems/rotate-image/description/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // using function
        // reverse(matrix.begin(), matrix.end());
        
        // manually
        int size = matrix.size();
        
        for(int i = 0 ; i < size/2; i++){
            vector<int> temp = matrix[i];
            matrix[i] = matrix[size - 1 - i];
            matrix[size - 1 - i] = temp;
        }
        
        for(int i = 0; i < matrix.size(); i++){
            for( int j = i + 1; j < matrix.size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
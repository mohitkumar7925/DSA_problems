// LC-53
// https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        int maxEnding = nums[0];
        for(int i = 1 ; i < nums.size(); i++){
            maxEnding = max(maxEnding + nums[i], nums[i]);
            result = max(result, maxEnding);
        }
        return result;
    }
};
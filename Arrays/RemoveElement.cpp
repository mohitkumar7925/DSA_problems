// https://leetcode.com/problems/remove-element/description/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int lastPos = nums.size() - 1;
        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            if(nums[i] == val){
                swap(nums[i], nums[lastPos--]);
            }
        }
        return lastPos + 1;
    }
};
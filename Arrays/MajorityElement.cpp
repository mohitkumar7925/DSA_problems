// LC-169
//https://leetcode.com/problems/majority-element/description/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[candidate] == nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count == 0){
                count = 1;
                candidate = i;
            }
        }
        return nums[candidate];
    }
};
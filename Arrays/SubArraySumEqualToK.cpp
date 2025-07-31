// LC-560
// https://leetcode.com/problems/subarray-sum-equals-k/description/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> map;
     map[0] = 1;
     int total = 0;
     int count = 0;
    
     for(int i = 0 ; i < nums.size(); i++){
        total += nums[i];
        if(map[total - k]){
            count = count + map[total - k];
        }
        map[total] = map[total] + 1;
     }

     return count;
    }
};
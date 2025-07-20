// LC-388
// link - https://leetcode.com/problems/intersection-of-two-arrays-ii/

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        vector<int> result;

        // Count elements in nums1
        for (int i = 0; i < nums1.size(); i++) {
            map[nums1[i]]++;
        }

        // Find intersection with nums2
        for (int i = 0; i < nums2.size(); i++) {
            if (map[nums2[i]] > 0) {
                result.push_back(nums2[i]);
                map[nums2[i]]--;
            }
        }

        return result;
    }
};
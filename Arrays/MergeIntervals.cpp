// LC-53
//https://leetcode.com/problems/merge-intervals/description/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        if (intervals.empty()) {
            return {};
        }
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });

        vector<vector<int>> result;

        result.push_back(intervals[0]);

        for (int i = 1, j = 0; i < intervals.size(); i++) {
            if (result[j][1] >= intervals[i][0]) {
                result[j][1] = max(result[j][1], intervals[i][1]);
            } else {
                result.push_back(intervals[i]);
                j++;
            }
        }
        return result;
    }
};
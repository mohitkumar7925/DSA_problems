// https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1, j = n - 1, k = m + n - 1;

        // checking whelter the second array is non empty, means all elements
        // are gone to the first nums1 array
        while (j >= 0)

            // if first arr element are all traversed OR jth element is greater
            if (i < 0 || nums1[i] < nums2[j]) {
                nums1[k--] = nums2[j--];
            } else {
                // add the ith element to the kth position
                nums1[k--] = nums1[i--];
            }
    }
};
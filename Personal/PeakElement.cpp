class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
    
            int size = nums.size();
            if (size == 1) {
                return 0;
            }
    
            if (nums[0] > nums[1]) {
                return 0;
            }
            if (nums[size - 2] < nums[size - 1]) {
                return size - 1;
            }
    
            int start = 0, end = size - 1;
            int mid;
    
            while (start < end) {
                mid = start + (end - start) / 2;
    
                if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1]) {
                    break;
                } else if (nums[mid - 1] > nums[mid]) {
                    end = mid;
                } else {
                    start = mid;
                }
            }
            return mid;
        }
    };
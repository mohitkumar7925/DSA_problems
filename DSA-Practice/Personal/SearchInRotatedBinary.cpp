class Solution {
    public:
        int findPivot (vector<int> nums){
    
            int size = nums.size();
            int start = 0;
            int end = size - 1;
            int mid ;
            while(start < end){
                mid = start + (end - start)/2;
                
                if(nums[mid] < nums[0]){
                    end = mid ;
                    
                }
                else {
                    start = mid + 1;
                }
            }
    
            return start;
        }
    
        int search(vector<int>& nums, int target) {
            
            int size = nums.size() ;
            
            int pivot;
            pivot = findPivot(nums);
            int start ;
            int end ;
    
            if(target >= nums[pivot] && target <= nums[size - 1]){
                start = pivot;
                end = size - 1;
            }
            else{
                start = 0;
                end = pivot - 1 ;
            }
    
            int mid;
    
            while(start <= end){
                mid = start + (end - start)/2;
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] > target){
                    end = mid - 1;
                }
                else{
                    start = mid + 1;
                }
            }
    
            return -1;
        }
    };
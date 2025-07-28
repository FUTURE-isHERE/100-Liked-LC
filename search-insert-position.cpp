// https://leetcode.com/problems/search-insert-position/?envType=problem-list-v2&envId=79h8rn6

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        
        int left = 0;
        int right = n-1;

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }

        return left;
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = -1;
        int r = nums.size();
        while(l + 1 < r) {
            int mid = (l + r) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) l = mid;
            else r = mid;
        }
        return -1;
    }
};
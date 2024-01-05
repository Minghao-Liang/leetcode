class Solution {
public:
    int quickSelect(vector<int>&nums, int l, int r, int k) {
        if(l == r) return nums[k];
        int i = l - 1, j = r + 1, x = nums[(l + r) / 2];
        while(i < j) {
            do i++; while(nums[i] < x);
            do j--; while(nums[j] > x);
            if(i < j) swap(nums[i], nums[j]);
        }
        if(k <= j) return quickSelect(nums, l, j, k);
        else return quickSelect(nums, j + 1, r, k);
    }

    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        return quickSelect(nums, 0, n - 1, n - k);
    }
};
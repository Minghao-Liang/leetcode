class Solution {
public:
    void reverse(vector<int>& nums, int start, int end) {
        for( ; start < end; start++, end--) {
            swap(nums[start], nums[end]);
        }
    }

    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k %= len;
        reverse(nums, 0, len - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, len - 1);
    }
};
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        int j = n - 1;
        while(i >= 0 && nums[i + 1] <= nums[i]) {
            i--;
        }
        if(i >= 0) {
            while(j >= 0 && nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};
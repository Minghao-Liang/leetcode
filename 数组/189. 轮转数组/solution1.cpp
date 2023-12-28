class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> buffer(len);
        for(int i = 0; i < len; i++) {
            buffer[(i + k) % len] = nums[i];
        }
        nums = buffer;
    }
};
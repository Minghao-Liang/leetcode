class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() < 2) return nums.size();
        int fast = 2, slow = 2;
        while(fast < nums.size()) {
            if(nums[fast] != nums[slow - 2]) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};
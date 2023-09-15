class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int a, b;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] != nums[i + 1]) {
                a = i;
                b = i + 1;
                break;
            }
        }
        if(nums[a] < nums[b]) {
            for(int i = b + 1; i < n; i++) {
                if(nums[i - 1] > nums[i]) return false;
            }
        }
        else if(nums[a] > nums[b]) {
            for(int i = b + 1; i < n; i++) {
                if(nums[i - 1] < nums[i]) return false;
            }
        }
        return true;
    }
};
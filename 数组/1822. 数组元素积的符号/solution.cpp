class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int ne = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) return 0;
            if(nums[i] < 0) ne++;
        }
        return ne % 2 == 0 ? 1 : -1;
    }
};
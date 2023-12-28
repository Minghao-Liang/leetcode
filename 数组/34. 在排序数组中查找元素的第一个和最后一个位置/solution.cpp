class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = -1, r = nums.size();
        int i, j;
        if(nums.empty()) return vector<int>{-1, -1};
        if(nums.size() == 1) {
            if(nums[0] == target) return vector<int>{0, 0};
            else return vector<int>{-1, -1};
        }
        while(l + 1 < r) {
            int mid = l + (r - l) / 2;
            if(nums[mid] >= target) r = mid;
            else l = mid;
            i = r;
        }
        if(r == nums.size() || nums[i] != target) return vector<int>{-1, -1};
        else {
            int l = -1, r = nums.size();
            while(l + 1 < r) {
                int mid = l + (r - l) / 2;
                if(nums[mid] <= target) l = mid;
                else r = mid;
                j = l;
            }
        }
        return vector<int>{i, j};
    }
};
class Solution {  
public:  
    void qsort(vector<int>& nums, int l, int r) {  
        if(l >= r) return;  
        int i = l - 1, j = r + 1, m = nums[(l + r) / 2];  
        while(i < j){  
            do i++; while(nums[i] < m);
            do j--; while(nums[j] > m);
            if(i < j) swap(nums[i], nums[j]);  
        }
        qsort(nums, l, j);  
        qsort(nums, j + 1, r);  
    }  
    void sortColors(vector<int>& nums) {  
        int n = nums.size();  
        qsort(nums, 0, n - 1);  
    }  
};
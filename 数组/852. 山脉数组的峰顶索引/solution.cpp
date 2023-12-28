class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = -1, r = arr.size();
        int index = 0;
        while(l + 1 < r) {
            int mid = l + (r - l) /2;
            if(arr[mid] < arr[mid + 1]) {
                l = mid;
            }
            else r = mid;
        }
        return r;
    }
};
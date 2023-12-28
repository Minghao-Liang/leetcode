class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int l = -1, r = m * n;
        while (l + 1 < r) {
            int mid = l + (r - l) / 2;
            if (matrix[mid / n][mid % n] < target) {
                l = mid;
            } else if (matrix[mid / n][mid % n] > target) {
                r = mid;
            } else {
                return true;
            }
        }
        return false;
    }
};
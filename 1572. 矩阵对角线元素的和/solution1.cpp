class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int sum = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(i == j || (i + j + 1) == m) sum += mat[i][j];
            }
        }
        return sum;
    }
};
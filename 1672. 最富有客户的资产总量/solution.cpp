class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0, maxa = 0;
        int m = accounts.size(), n = accounts[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                sum += accounts[i][j];
            }
            maxa = max(sum, maxa);
            sum = 0;
        }
        return maxa;
    }
};
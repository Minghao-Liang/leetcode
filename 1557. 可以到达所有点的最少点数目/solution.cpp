class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> cnt(n);
        vector<int> res;
        for(int i = 0; i < edges.size(); i++) {
            int x = edges[i][1];
            cnt[x]++;
        }
        for(int i = 0; i < n; i++) {
            if(cnt[i] == 0) res.push_back(i);
        }
        return res;
    }
};
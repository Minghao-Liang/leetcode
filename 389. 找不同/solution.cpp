class Solution {
public:
    char findTheDifference(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        int count[26] = {0};
        for(int i = 0; i < n1; i++) {
            count[s[i] - 'a']++;
        }
        for(int i = 0; i < n2; i++) {
            count[t[i] - 'a']--;
            if(count[t[i] - 'a'] < 0) {
                return t[i];
            }
        }
        return ' ';
    }
};
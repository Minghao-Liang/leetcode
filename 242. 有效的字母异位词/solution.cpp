class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        if(n1 != n2) {
            return false;
        }
        int count1[26] = {0};
        int count2[26] = {0};
        for(int i = 0; i < n1; i++) {
            count1[s[i] - 'a']++;
        }
        for(int i = 0; i < n2; i++) {
            count2[t[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(count1[i] != count2[i]) {
                return false;
            }
        }
        return true;
    }
};
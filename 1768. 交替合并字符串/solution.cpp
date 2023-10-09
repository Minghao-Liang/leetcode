class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        string word;
        word.resize(n1 + n2);
        
        int i = 0, j = 0, k = 0;
        while(i < n1 && j < n2) {
            word[k++] = word1[i++];
            word[k++] = word2[j++];
        }
        while(i < n1) word[k++] = word1[i++];
        while(j < n2) word[k++] = word2[j++];
        return word;
    }
};
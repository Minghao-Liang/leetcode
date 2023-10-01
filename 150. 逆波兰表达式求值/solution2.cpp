class Solution {
public:
    bool isNumber(string& token) {
        return !(token == "+" || token == "-" || token == "*" || token == "/");
    }

    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        vector<int> stk((n + 1) / 2);
        int index = -1;
        for(int i = 0; i < n; i++) {
            string& token = tokens[i];
            if(isNumber(token)) {
                stk[++index] = atoi(token.c_str());
            }
            else {
                switch(token[0]) {
                    case '+':
                        index--;
                        stk[index] += stk[index + 1];
                        break;
                    case '-':
                        index--;
                        stk[index] -= stk[index + 1];
                        break;
                    case '*':
                        index--;
                        stk[index] *= stk[index + 1];
                        break;
                    case '/':
                        index--;
                        stk[index] /= stk[index + 1];
                        break;
                }
            }
        }
        return stk[index];
    }
};
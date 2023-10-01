class Solution {
public:
    bool isNumber(string& token) {
        return !(token == "+" || token == "-" || token == "*" || token == "/");
    }

    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> stk;
        for(int i = 0; i < n; i++) {
            string& token = tokens[i];
            if(isNumber(token)) {
                stk.push(atoi(token.c_str()));
            }
            else {
                int num2 = stk.top();
                stk.pop();
                int num1 = stk.top();
                stk.pop();
                switch(token[0]) {
                    case '+':
                        stk.push(num1 + num2);
                        break;
                    case '-':
                        stk.push(num1 - num2);
                        break;
                    case '*':
                        stk.push(num1 * num2);
                        break;
                    case '/':
                        stk.push(num1 / num2);
                        break;
                }
            }
        }
        return stk.top();
    }
};
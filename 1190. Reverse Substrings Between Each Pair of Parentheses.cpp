class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> stack;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ')') {
                string rev = "";
                while (!stack.empty() && stack.top() != '(') {
                    rev += stack.top();
                    stack.pop();
                }
                if (!stack.empty()) stack.pop();
                
                for (int j = 0; j < rev.length(); j++) stack.push(rev[j]);
            } else stack.push(s[i]);
        }

        string result = "";
        while (!stack.empty()) {
            result = stack.top() + result;
            stack.pop();
        }

        return result;
    }
};

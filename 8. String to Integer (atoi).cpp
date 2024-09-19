class Solution {
public:
    int myAtoi(string s) {
        int sign = 1, result = 0, i = 0;
        
        while (i < s.size() && s[i] == ' ') i++;
        
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') sign = -1;
            i++;
        }
        
        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            
            // Check for overflow
            if (result > (INT_MAX - digit) / 10) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            i++;
        }
        
        return result * sign;
    }
};

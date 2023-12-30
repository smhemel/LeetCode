class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int initialValue = x;
        if (x < 0) return false;

        long long int matcher = 0;

        while(x != 0) {
            long long int remainder = x%10;
            matcher = matcher*10 + remainder;
            x /= 10;
        }

        if (initialValue == matcher) return true;

        return false;
    }
};

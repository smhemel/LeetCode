class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.size();
        int left = 0, right = n - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                char most = (s[left] < s[right]) ? s[left] : s[right];
                s[left] = most;
                s[right] = most;
            }
            left++, right--;
        }

        return s;
    }
};

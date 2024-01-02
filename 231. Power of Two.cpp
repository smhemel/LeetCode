class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n < 1) return false;
        for (int i = 0; i <= n; i++)
        {
            if (pow(2, i) == n) return true;
            if (pow(2, i) > n) return false;
        }
        return false;
    }
};

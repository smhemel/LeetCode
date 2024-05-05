class Solution {
public:
    int countDigits(int num) {
        int copy = num;
        int ans = 0;
        while (num > 0) {
            if (copy % (num % 10) == 0) ans++;
            num /= 10;
        }
        return ans;
    }
};

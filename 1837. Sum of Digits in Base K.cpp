class Solution {
public:
    int sumBase(int n, int k) {
        int rem = 0, i = 1, res = 0, sum = 0;

        while (n != 0) {
            rem = n % k;
            res += (rem * i);
            n /= k;
            i *= 10;
        }

        while (res) {
            sum += res % 10;
            res /= 10;
        }

        return sum;
    }
};

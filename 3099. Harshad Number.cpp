class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0, n = x;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }

        if (n % sum == 0) return sum;

        return -1;
    }
};

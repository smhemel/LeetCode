class Solution {
public:
    int productOfDigits(int num) {
        int product = 1;
        while (num > 0) {
            int digit = num % 10;
            product *= digit;
            num /= 10;
        }
        return product;
    }

    int findNumber(int n, int t) {
        for (int i = n;; i++) {
            if (productOfDigits(i) % t == 0) {
                return i;
            }
        }
    }

    int smallestNumber(int n, int t) {
        int result = findNumber(n,t);

        return result;
    }
};

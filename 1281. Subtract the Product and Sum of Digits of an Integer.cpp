class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1;
        while (n > 0) {
            int temp = n%10;
            n /= 10;

            product *= temp;
            sum += temp;
        }

        return product - sum;
    }
};

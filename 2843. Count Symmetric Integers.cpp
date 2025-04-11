array<int, 10001> sum = {0};
class Solution {
public:
    static void prefix_sum() {
        if (sum[11] == 1)
            return;
        for (int i = 11; i < 100; i++)
            sum[i] = sum[i - 1] + (i % 11 == 0);

        fill(sum.begin() + 100, sum.begin() + 1000, sum[99]);
        for (int i = 1000; i < 10000; i++) {
            const int x0 = i % 10;
            const int x1 = (i % 100) / 10;
            const int x2 = (i % 1000) / 100;
            const int x3 = i / 1000;
            sum[i] = sum[i - 1] + (x0 + x1 == x2 + x3);
        }
        sum[10000] = sum[9999];
    }
    
    static int countSymmetricIntegers(int low, int high) {
        prefix_sum();
        return sum[high] - sum[low - 1];
    }
};

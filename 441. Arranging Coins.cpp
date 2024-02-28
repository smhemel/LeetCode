class Solution {
public:
    int arrangeCoins(int n) {
        long long i = 1;
        if(n == 0) return 0;
        else if(n == 1) return 1;
        while(n > 0) {
            i++;
            n -= i;
        }

        return i-1;
    }
};

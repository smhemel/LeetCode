class Solution {
public:
    bool isPowerOfThree(int n) {
        double x = (double)n;
        while(true) {
            if(x == 1) return true;
            else if (x<=0) return false;
            x = x/3;
        }

        return false;
    }
};

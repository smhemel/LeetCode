class Solution {
public:
    bool isPowerOfFour(long long int n) {
        set<long long int> nums;

        if (n < 0) return false;

        for (int i=0; ; i++) {
            long long int x = pow(4, i);
            if (x > pow(2,31)) break;

            nums.insert(x);
        }

        if(nums.count(n)) return true;
        return false;
    }
};

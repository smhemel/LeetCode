class Solution {
public:
    bool checkDivisiblity(int num) {
        int x = num;
        while (num != 0) {
            int r = num % 10;
            if (r == 0 || x % r != 0) return false;
            num /= 10;
        }
        
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;

        for (int i = left; i <= right; ++i) {
            if (i < 10) res.push_back(i);
            else {
                if (checkDivisiblity(i)) res.push_back(i);
            }
        }
        return res;
    }
};

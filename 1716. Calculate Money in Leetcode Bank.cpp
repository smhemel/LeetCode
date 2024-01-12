class Solution {
public:
    int totalMoney(int n) {
        int ans = 0, start = 1, day = 0, index = 1;
        while(index <= n) {
            ans += (day + start);

            if (index%7 == 0) {
                start++;
                day = 0;
            } else {
                day++;
            }

            index++;
        }

        return ans;
    }
};

class Solution {
public:
    int distMoney(int money, int children) {
        if (money < (children)) return -1;
        if (money < (children + 7)) return 0;

        int max = (money - children) / 7;
        float k = float(money) / (8 * children);

        if (k > 1) {
            return children - 1;
        } else if (k == 1) {
            return children;
        } else {
            if ((money - 8 * (children - 1)) == 4) return max - 1;
            else return max;
        }
    }
};

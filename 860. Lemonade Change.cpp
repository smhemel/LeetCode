class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) five++;
            else if (bills[i] == 10) {
                if (five > 0) {
                    five--, ten++;
                } else return 0;
            } else {
                if (five > 0 && ten > 0) {
                    five--, ten--;
                } else if (five >= 3) five -= 3;
                else return 0;
            }
        }

        return 1;
    }
};

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x = (coordinates[0] - 'a') + 1;
        int y = coordinates[1] - '0';

        if ((x&1 && y&1) || (x%2 == 0 && y%2 == 0)) return false;

        return true;
    }
};

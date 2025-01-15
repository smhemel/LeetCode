class Solution {
public:
    int countSetBits(int num) {
        int count = 0;
        while (num) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }

    int addSetBits(int num, int bitsToAdd) {
        int bitPos = 0;
        while (bitsToAdd > 0) {
            while ((num >> bitPos) & 1) bitPos++;
            num |= (1 << bitPos);
            bitsToAdd--;
        }
        return num;
    }

    int removeSetBits(int num, int bitsToRemove) {
        while (bitsToRemove > 0) {
            num &= (num - 1);
            bitsToRemove--;
        }
        return num;
    }
    int minimizeXor(int num1, int num2) {
        int setBitsNum1 = countSetBits(num1);
        int setBitsNum2 = countSetBits(num2);

        if (setBitsNum1 == setBitsNum2) return num1;
        if (setBitsNum1 < setBitsNum2) return addSetBits(num1, setBitsNum2 - setBitsNum1);
        return removeSetBits(num1, setBitsNum1 - setBitsNum2);
    }
};

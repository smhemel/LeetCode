class Solution {
public:
    bool checkSubarraySum(vector<int>& numbers, int k) {
        int currentSum = numbers[0];
        int length = numbers.size();

        for (int i = 1; i < length; i++) {
            if (numbers[i] == numbers[i - 1] && numbers[i] == 0) return true;

            currentSum += numbers[i];
            if (!(currentSum % k)) return true;

            int index = 0, tempSum = currentSum;

            while ((i - index) > 1 && tempSum >= k) {
                tempSum -= numbers[index++];

                if (tempSum % k == 0) return true;
            }
        }

        return false;
    }
};

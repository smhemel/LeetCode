class Solution {
public:
    int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
    int minElement(vector<int>& nums) {
        int minElement = INT_MAX;  // Initialize minimum element to a large value
    for (int& num : nums) {
        num = sumOfDigits(num);  // Replace each element with the sum of its digits
        if (num < minElement) {
            minElement = num;    // Update the minimum element
        }
    }
    return minElement;
    }
};

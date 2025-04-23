class Solution {
public:
    int countLargestGroup(int n) {
        std::unordered_map<int, int> map;
        int maxSize = 0;
        
        for (int i = 1; i <= n; ++i) {
            int sum = digitSum(i);
            map[sum]++;
            maxSize = std::max(maxSize, map[sum]);
        }
        
        int count = 0;
        for (const auto& pair : map) {
            if (pair.second == maxSize) {
                count++;
            }
        }
        return count;
    }
    
private:
    int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};

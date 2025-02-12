class Solution {
    public:
        int maximumSum(vector<int>& nums) {
            unordered_map<int, int> freq;
            int res = -1;

            for (int num : nums) {
                int key = digitSum(num);
                if (freq.find(key) != freq.end()) {
                    res = max(res, freq[key] + num);
                    freq[key] = max(freq[key], num);
                } else {
                    freq[key] = num;
                }
            }

            return res;
        }

    private:
        int digitSum(int n) {
            int sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            return sum;
        }
};

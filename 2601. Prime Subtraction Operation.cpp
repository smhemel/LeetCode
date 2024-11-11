class Solution {
    void sieveOfEratosthenes(vector<int>& primes, int maxVal) {
        bool sieve[maxVal + 1];
        memset(sieve, false, sizeof(sieve));
        for (int i = 2; i * i < maxVal; ++i) {
            if (!sieve[i]) {
                for (int j = 2; i * j < maxVal; ++j) sieve[i * j] = true;
            }
        }
        for (int i = 2; i < maxVal; ++i)
            if (!sieve[i]) primes.push_back(i);
    }

public:
    bool primeSubOperation(vector<int>& nums) {
        vector<int> primes;
        int maxVal = *max_element(nums.begin(), nums.end());
        sieveOfEratosthenes(primes, maxVal);

        for (int i = 0; i < nums.size(); ++i) {
            int diff = i == 0 ? nums[0] - 1 : nums[i] - nums[i - 1] - 1;
            int lb = lower_bound(primes.begin(), primes.end(), diff) - primes.begin();

            if (lb == primes.size() or primes[lb] > diff)
                lb--;
            if (lb < 0) {
                if (i == 0 or nums[i] > nums[i - 1])
                    continue;
                else
                    return false;
            }
            nums[i] -= primes[lb];
        }
        return true;
    }
};

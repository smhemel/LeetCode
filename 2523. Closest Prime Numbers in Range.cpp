class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2 || n == 3) return true;
        if (n % 2 == 0) return false;

        for (int i = 3; i <= sqrt(n); i += 2)
            if (n % i == 0) return false;

        return true;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;

        for (int i = left; i <= right; ++i)
            if (isPrime(i)) primes.push_back(i);

        if (primes.size() < 2) return {-1, -1};

        int minDiff = INT_MAX;
        int minIdx = 0;

        for (int i = 1; i < primes.size(); ++i) {
            int diff = primes[i] - primes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                minIdx = i - 1;
            }
        }

        return {primes[minIdx], primes[minIdx + 1]};
    }
};

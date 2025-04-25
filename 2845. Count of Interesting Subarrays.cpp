  class Solution 
{
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        long long result = 0;
        int prefix = 0;
        unordered_map<int, long long> countMap;
        countMap[0] = 1;

        for (int num: nums) {
            if (num % modulo == k) 
                prefix++;

            int mod = prefix % modulo;
            int target = (mod - k + modulo) % modulo;

            result += countMap[target];
            countMap[mod]++;
        }

        return result;
    }
};

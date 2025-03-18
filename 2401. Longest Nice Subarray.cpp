class Solution {
public:
    bool isPossible(vector<int>& freq) {
        for (auto x: freq) if (x > 1) return 0;

        return 1;
    }

    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        vector<bitset<31>> v;
        for (auto x : nums) {
            v.push_back(bitset<31>(x));
        }

        vector<int> freq(31, 0);
        int i = 0, j = 0;

        while (j < n) {
            auto b = v[j];
            for (int k = 30; k >= 0; k--)
                if (b[k] == 1) freq[30 - k]++;

            while (i < j && !isPossible(freq)) {
                auto t = v[i];
                for (int k = 30; k >= 0; k--)
                    if (t[k] == 1) freq[30 - k]--;

                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }
};

class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        map<int, int> mp;
        vector<int> unique;
        
        for (auto val : nums) {
            if (mp[val] == 0)
                unique.push_back(val);
            mp[val]++;
        }
        if (mp.size() < 3) return 0;

        int ans = 0, n = unique.size(), val1, val2, val3;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    val1 = unique[i];
                    val2 = unique[j], val3 = unique[k];
                    ans += (mp[val1] * mp[val2] * mp[val3]);
                }
            }
        }

        return ans;
    }
};

class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        if(all_of(nums.begin(), nums.end(), [](int x) { return x == 0; })) return 0;
        
        int res = -1, l = 0, r = queries.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            vector<int> pref(nums.size() + 1, 0);
            
            for (int i = 0; i <= mid; i++) {
                pref[queries[i][0]] += queries[i][2];
                pref[queries[i][1] + 1] -= queries[i][2];
            }
            
            for (int i = 1; i < nums.size(); i++) {
                pref[i] += pref[i - 1];
            }
            
            bool canZero = true;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > pref[i]) {
                    canZero = false;
                    break;
                }
            }
            
            if (canZero) {
                res = mid + 1;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return res;
    }
};

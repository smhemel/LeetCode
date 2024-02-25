class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        if (nums.size()%2 != 0) return false;
        
        set<int>S;
        int cnt[2111];
        memset(cnt, 0, sizeof(cnt));
        for (auto x: nums) {
            cnt[x]++;
            S.insert(x);
        }
        
        for (auto x: S){
            if (cnt[x] > 2) return false;
        }
        
        return true;
    }
};

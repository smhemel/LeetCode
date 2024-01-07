class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt[500], ans = 0;
        memset(cnt, 0, sizeof(cnt));

        for (int i=0; stones[i]; i++) cnt[stones[i]]++;

        for (int i=0; jewels[i]; i++) {
            if (cnt[jewels[i]] > 0) {
                ans += cnt[jewels[i]];
                cnt[jewels[i]] = 0;
            }
        }

        return ans;
    }
};

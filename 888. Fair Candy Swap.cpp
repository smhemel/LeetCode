class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> ans;
        int aliceSum = 0, bobSum = 0;
        int n = aliceSizes.size(), m = bobSizes.size();
        for (int i = 0; i < n; i++) aliceSum = aliceSum + aliceSizes[i];
        for (int i = 0; i < m; i++) bobSum = bobSum + bobSizes[i];
        for (int i = 0; i < n; i++) {
            int a1 = aliceSizes[i];
            for (int j = 0; j < m; j++) {
                int a2 = bobSizes[j];
                int ret1 = aliceSum - a1 + a2;
                int ret2 = bobSum - a2 + a1;
                if (ret1 == ret2) {
                    ans.push_back(a1);
                    ans.push_back(a2);
                    break;
                }
            }
            if (ans.size() == 2) break;
        }
        
        return ans;
    }
};

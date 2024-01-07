class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (auto str: operations) {
            if (str.compare("++X") == 0 || str.compare("X++") == 0) ans++;
            else ans--;
        }

        return ans;
    }
};

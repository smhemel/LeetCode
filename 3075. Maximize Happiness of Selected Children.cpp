class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long int ans = 0;
        int index = 0;
        sort(happiness.begin(), happiness.end(), greater<int>());

        while(k > 0) {
            ans += (happiness[index] <= index) ? 0 : (happiness[index] - index);
            k--;
            index++;
        }

        return ans;
    }
};

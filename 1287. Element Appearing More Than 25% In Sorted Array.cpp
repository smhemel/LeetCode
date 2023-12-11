class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int ar[211111], ans=0, specialInteger;

        for (auto element: arr) {
            ar[element]++;
            if (ar[element] > ans) {
                ans = max(ans, ar[element]);
                specialInteger = element;
            }
        }

        return specialInteger;
    }
};

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] ^ arr[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
            for (int k = i + 1; k < n; k++)
                if (prefix[i] == prefix[k + 1])
                    count += (k - i);

        return count;
    }
};

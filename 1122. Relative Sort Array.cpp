class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int ar[2111];
        vector<int> ans;
        map<int, int> M;
        memset(ar, 0, sizeof(ar));

        for (auto val : arr1)
            ar[val]++;

        for (auto val : arr2) {
            M[val] = 99;
            for (int i = 0; i < ar[val]; i++)
                ans.push_back(val);
        }

        sort(arr1.begin(), arr1.end());

        for (auto val : arr1)
            if (M[val] == 0)
                ans.push_back(val);

        return ans;
    }
};

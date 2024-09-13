class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size(), m = queries.size();
  
        for (int i = 1; i < n; ++i) {
            arr[i] ^= arr[i - 1];
        }

        vector<int> result;
        result.reserve(m);

        for (const auto& q : queries) {
            int start = q[0], end = q[1];
            result.push_back(start > 0 ? arr[end] ^ arr[start - 1] : arr[end]);
        }
        
        return result;
    }
};

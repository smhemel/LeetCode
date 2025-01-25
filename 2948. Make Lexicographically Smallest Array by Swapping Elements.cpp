class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        if (n == 0) return {};

        vector<pair<int, int>> sortedPairs;
        for (int i=0; i<n; i++) sortedPairs.emplace_back(nums[i], i);
        
        sort(sortedPairs.begin(), sortedPairs.end());

        vector<int> result(n);
        int groupStart = 0;

        for (int i=0; i<n; i++) {
            if (i == n-1 || sortedPairs[i+1].first - sortedPairs[i].first > limit) {
                vector<int> indices;
                for (int j = groupStart; j <= i; ++j) 
                    indices.push_back(sortedPairs[j].second);
                sort(indices.begin(), indices.end());
                
                for (int j=0; j<indices.size(); j++) 
                    result[indices[j]] = sortedPairs[groupStart + j].first;
                
                groupStart = i + 1;
            }
        }

        return result;
    }
};

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> X, Y;
        unordered_set<int> A, B;

        for (int i = 0; i < nums1.size(); i++) A.insert(nums1[i]);
        for (int i = 0; i < nums2.size(); i++) B.insert(nums2[i]);
        
        for (auto i : A)
            if (B.find(i) == B.end())
                X.push_back(i);

        for (auto i : B)
            if (A.find(i) == A.end())
                Y.push_back(i);

        vector<vector<int>> ans;
        ans.push_back(X);
        ans.push_back(Y);

        return ans;
    }
};

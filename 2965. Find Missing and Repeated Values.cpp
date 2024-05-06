class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> arr;
        for (auto nums: grid)
            for (auto num: nums)
                arr.push_back(num);

        for (int i = 0; i < arr.size(); ) {
            if (arr[i] != arr[arr[i] - 1]) swap(arr[i], arr[arr[i] - 1]);
            else i++;
        }
        
        vector<int> res;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != i + 1) {
                res.push_back(arr[i]);
                res.push_back(i + 1);
                break;
            }
        }
        return res;
    }
};

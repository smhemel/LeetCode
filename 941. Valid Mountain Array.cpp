class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return false;

        int maxi = arr[0], ind = 0;
        for (int i = 1; i < n; i++)
            if (arr[i] > maxi) {
                maxi = arr[i];
                ind = i;
            }

        if ((ind == 0) || (ind == n - 1)) return false;
        
        for (int i = 0; i < ind; i++)
            if (arr[i] >= arr[i + 1]) return false;

        for (int i = ind; i < arr.size() - 1; i++)
            if (arr[i] <= arr[i + 1]) return false;
        
        return true;
    }
};

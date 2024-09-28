class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
sort(maximumHeight.rbegin(), maximumHeight.rend());
    
    long long int n = maximumHeight.size();
    long long int currentHeight = maximumHeight[0];
    long long int totalSum = 0;
    
    for (long long int  i = 0; i < n; ++i) {
        if (currentHeight <= 0) {
            return -1; // Not possible to assign unique heights
        }
        if (maximumHeight[i] < currentHeight) {
            currentHeight = maximumHeight[i];
        }
        totalSum += currentHeight;
        --currentHeight;
    }
    
    return totalSum;
    }
};

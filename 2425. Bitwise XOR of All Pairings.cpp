class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int x = 0;
        int n = nums1.size(), m = nums2.size();

        if (n % 2 == 0 && m % 2 == 0) {
            return 0;
        } else if (n % 2 == 0 && m % 2 == 1) {
            for (int i = 0; i < n; i++) x ^= nums1[i];
            return x;
        } else if (n % 2 == 1 && m % 2 == 0) {
            for (int i = 0; i < m; i++) x ^= nums2[i];
            return x;
        } else {
            for (int i = 0; i < n; i++) x ^= nums1[i];
            for (int i = 0; i < m; i++) x ^= nums2[i];
            
            return x;
        }
        
        return -1;
    }
};

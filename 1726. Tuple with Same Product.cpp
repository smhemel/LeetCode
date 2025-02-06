class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        const int n = nums.size(), N = n * (n - 1) / 2;
        vector<int> product;
        product.reserve(N);
        
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                product.push_back(nums[i] * nums[j]);

        sort(product.begin(), product.end());

        int ans = 0, j = 1, f = 1;
        for (int i = 2; i < N; i++) {
            if (product[j] == product[i]) f++;
            else {
                if (f > 1) ans += f * (f - 1) * 4;
                f = 1;
                j = i;
            }
        }

        return ans;
    }
};

class Solution {
public:
    int countone(int num) {
        int count = 0;
        while (num != 0) {
            int rem = num % 2;
            if (rem == 1) count++;
            num /= 2;
        }

        return count;
    }

    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i = 0; i <= n; i++)
            ans.push_back(countone(i));

        return ans;
    }
};

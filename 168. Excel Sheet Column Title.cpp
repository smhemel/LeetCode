class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while(n > 0) {
            int temp = (n-1)%26;
            ans.push_back('A'+temp);
            n = (n-1)/26;
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};

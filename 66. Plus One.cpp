class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int rem = 1;
        int i=digits.size()-1;

        for (; i>=0; i--) {
            int temp = digits[i]+rem;

            if (temp < 10) {
                ans.push_back(temp);
                rem = 0;
            } else {
                ans.push_back(temp%10);
                rem = temp/10;
            }
        }
        if(rem > 0) ans.push_back(rem);

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

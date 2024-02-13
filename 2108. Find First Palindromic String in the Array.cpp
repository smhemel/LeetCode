class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string& s : words){
            string tmp = s;
            reverse(tmp.begin(), tmp.end());

            if (s == tmp) return s;
        }

        return "";
    }
};

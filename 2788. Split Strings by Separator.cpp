class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;

        for(auto word: words) {
            string temp = "";

            for(auto ch: word) {
                if(ch == separator && temp != "") {
                    ans.push_back(temp);
                    temp = "";
                }
                if(ch != separator) temp += ch;
            }

            if(temp != "") ans.push_back(temp);
        }

        return ans;
    }
};

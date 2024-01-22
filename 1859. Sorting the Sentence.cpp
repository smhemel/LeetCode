class Solution {
public:
    static bool comp(const pair<int,string> &a, const pair<int,string> &b) {
        return a.first < b.first;
    }

    string sortSentence(string s) {
        int position = 0;
        string word = "";
        vector<pair<int, string>> words;

        for (int i=0; s[i]; i++) {
            int num = s[i] - '0';

            if (s[i] == ' ') {
                words.push_back(make_pair(position, word));
                position = 0;
                word = "";
            } else if(num >= 0 && num <= 9) {
                position = (position * 10) + num;
            } else {
                word += s[i];
            }
        }
        words.push_back(make_pair(position, word));

        sort(words.begin(), words.end(), comp);
        string ans = words[0].second;

        for (int i=1; i<words.size(); i++) {
            ans += " ";
            ans += words[i].second;
        }

        return ans;
    }
};

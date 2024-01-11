class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        int start = s[0], end = s[3];
        int startIn = int(s[1])-48;
        int endIn = int(s[4])-48;

        for(char c = start; c <= end; c++)
            for(int i = startIn; i<= endIn; i++) { 
                string str = "";
                str+=c;
                str+=to_string(i);
                ans.push_back(str);
            }
    
        return ans;
    }
};

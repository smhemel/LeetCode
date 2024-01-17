class Solution {
public:
    string reverseWords(string s) {
        string w="",ss="";

        for(int i=0; i<s.length(); i++) {
            if(s[i] == ' ') {
                ss=ss+w+" ";
                w="";
            }
            else {
                w=s[i]+w;
            }
        }
        ss=ss+w;

        return ss;
    }
};

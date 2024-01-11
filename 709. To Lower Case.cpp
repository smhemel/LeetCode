class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; s[i]; i++)
            if(s[i]>='A' && s[i]<='Z')
                s[i]+=('a'-'A');
                
        return s;
    }
};

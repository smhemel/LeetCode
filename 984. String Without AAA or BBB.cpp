class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string s = "";
        while(a || b) {
            if (a > b && a > 1) {
                s += "aa";
                a -= 2;
                if (b > 0) {
                    s += "b";
                    b--;
                }
            } else if (b > a && b > 1) {
                s += "bb";
                b -= 2;
                if (a > 0) {
                    s += "a";
                    a--;
                }
            } else {
                if (s.length() == 0) {
                    if (a) {
                        s += "a";
                        a--;
                    }
                    if (b) {
                        s += "b";
                        b--;
                    }
                }
                if (a && s[s.length()-1] == 'b') {
                    s += "a";
                    a--;
                }
                if (b && s[s.length()-1] == 'a') {
                    s += "b";
                    b--;
                }
            }
        }

        return s;
    }
};

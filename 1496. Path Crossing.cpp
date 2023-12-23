class Solution {
public:
    bool isPathCrossing(string s) {
        map<pair<int,int>,int>M;
        M[make_pair(0,0)] = 1;

        int x = 0, y = 0;

        for (int i=0; s[i]; i++) {
            if (s[i] == 'N') y++;
            else if (s[i] == 'S') y--;
            else if (s[i] == 'E') x++;
            else if (s[i] == 'W') x--;

            M[make_pair(x,y)]++;
            if (M[make_pair(x,y)] == 2) return true;
        }

        return false;
    }
};

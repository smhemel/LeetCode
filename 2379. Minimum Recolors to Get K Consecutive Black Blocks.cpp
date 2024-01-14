class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cnt = 0;
        map<char,int>M;
        M['B'] = 0;
        for (int i=0; blocks[i]; i++) {
            if (i < k) {
                M[blocks[i]]++;
            } else {
                if (blocks[i-k] == 'B') M['B']--;
                if (blocks[i] == 'B') M['B']++;
            }

            cnt = max(cnt, M['B']);
        }

        return (k-cnt) < 1 ? 0 : (k-cnt);
    }
};

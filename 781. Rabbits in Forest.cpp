short m[1000];
class Solution {
public:
    static int numRabbits(const vector<int>& a) {
        const int n = a.size();
        memset(m, 0, sizeof(m));
        for (int i = 0; i < n; ++m[a[i++]]);
        int count = 0;

        for (int i = 0; i < 1000;) {
            const int c = m[i++];
            if (c == 0) continue;
            count += i * (c / i + !!(c % i));
        }

        return count;
    }
};

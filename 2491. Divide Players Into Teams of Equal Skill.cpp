class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(begin(skill), end(skill));

        int n = skill.size();
        int i = 0, j = n - 1;
        long ans = 0, target = skill[0] + skill[n - 1], val1, val2;
        
        while(i < j) {
            val1 = skill[i++], val2 = skill[j--];
            if(val1 + val2 != target) return -1;
            ans += (val1 * val2);
        }

        return ans;
    }
};

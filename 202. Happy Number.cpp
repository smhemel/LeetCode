class Solution {
public:
    int solve(int n){
        int x = 0;
        while(n > 0){
            int rem = n%10;
            x += rem*rem;
            n /= 10;
        }
        return x;
    }

    bool isHappy(int n) {
        unordered_set<int> sett;

        while(n != 1 && !sett.count(n)){
            sett.insert(n);
            n = solve(n);
        }
        if(n == 1) return true;
        return false;
    }
};

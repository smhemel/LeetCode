class Solution {
public:
    int commonFactors(int a, int b) {
        int c = __gcd(a, b);
        int res = 0;
        for(int i = 1; i <= c; i++)
            if(c % i == 0) res++;

        return res; 
    }
};

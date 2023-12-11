class Solution {
public:
    bool isPrimeNumber(int n) {
        if (n == 2) return true;
        else if (n%2 == 0) return false;

        for (int i=3; i*i<=n+1; i+=2){
            if (n%i == 0) {
                return false;
            }
        }

        return true;
    }

    int greatestDivisor(int n) {
        for (int i=n/2; i>=1; i--) {
            if (n%i == 0) {
                return i;
            }
        }

        return n;
    }

    int minSteps(int n) {
        if (n == 1) return 0;
        else if(isPrimeNumber(n)) {
            return n;
        }

        int ans = 0;
        vector<int> v;
        int temp = n;
        while(temp>1) {
            temp = greatestDivisor(temp);
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        int step = v[0];
        for(int i = 1; i<v.size(); i++) {
            ans += v[i]/step;
            step = v[i];
        }
        ans += n/step;
        
        return ans;
    }
};

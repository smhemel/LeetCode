class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>M;
        vector<int> unique;
        int numberOfCard = hand.size();
        if (groupSize == 1) return true;
        else if (numberOfCard%groupSize != 0) return false;

        for (auto num: hand) M[num]++;
        for (const auto& [key,val]: M) unique.push_back(key);

        sort(unique.begin(), unique.end());

        int availableIndex = 0,temp = 0;
        bool f = true;
        for (int i = 0; i < unique.size()-1; i++) {
            cout << unique[i] << " ---- " << M[unique[i]] << endl;
            if(M[unique[i]] != 0 && M[unique[i+1]] != 0 && unique[i+1]-unique[i] == 1) {
                if (temp == (groupSize - 2)) {
                    temp += 2;
                    M[unique[i]]--;
                    M[unique[i+1]]--;
                    if (M[unique[i]] != 0 && f) availableIndex = i;
                    else if (M[unique[i+1]] != 0 && f) availableIndex = i+1;
                    else if (f) availableIndex = i+2;
                } else {
                    temp++;
                    M[unique[i]]--;
                    if (M[unique[i]] != 0 && f) {
                        availableIndex = i;
                        f = false;
                    }
                }
            } else if (M[unique[i]] == 0 || M[unique[i+1]] == 0 || unique[i+1]-unique[i] != 1) return false;

            if (temp == groupSize) {
                f = true;
                temp = 0;
                i = availableIndex - 1;
            }
        }

        if (M[unique[unique.size()-1]] != 0) return false;

        return true;
    }
};

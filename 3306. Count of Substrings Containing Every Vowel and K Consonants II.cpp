class Solution {
public:
    long long atMostK(string word, int k) {
        int n = word.size(), l = 0, cons = 0;
        long long atleastk = 0;
        map<char, int> vowels;

        set<char> allvows = {'a', 'e', 'i', 'o', 'u'};
         
        for (int i = 0; i < n; i++) {
            if (allvows.find(word[i]) != allvows.end())
                vowels[word[i]]++;
            else cons++;

            while (vowels.size() == 5 && cons > k) {
                if (allvows.find(word[l]) != allvows.end()) {
                    vowels[word[l]]--;
                    if (vowels[word[l]] == 0) vowels.erase(word[l]);
                } else cons--;

                l++;
            }
            

            atleastk += (i - l + 1);
        }

        return atleastk;
    }

    long long countOfSubstrings(string word, int k) {
        return atMostK(word, k) - atMostK(word, k - 1);
    }
};

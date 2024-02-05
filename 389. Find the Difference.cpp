class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26] = {};
        for (const auto& it : s) arr[it - 'a']++;

        for (const auto& it : t) arr[it - 'a']--;

        for (int i = 0; i < 26; i++)
            if (arr[i] < 0)
                return i + 'a';

        return 0;
    }
};

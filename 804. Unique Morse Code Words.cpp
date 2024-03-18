class Solution {
public:
    vector<string> table{".-","-...","-.-.", "-..",".","..-.","--.","....", "..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string convertor(string& s) {
        string result;
        for (auto it : s) {
            result += table[it - 'a'];
        }
        return result;
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> uset;
        for (auto& it : words) {
            uset.insert(convertor(it));
        }
        return uset.size();
    }
};

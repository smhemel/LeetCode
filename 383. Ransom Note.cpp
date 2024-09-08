class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int NoteLen = ransomNote.size(), MagLen=magazine.size();
        int flag=0, k=0;

        for (int i = 0; i<MagLen; i++)
            if (ransomNote[k] == magazine[i]) flag++, k++;
        
        return (flag==NoteLen) ? 1 : 0;
    }
};

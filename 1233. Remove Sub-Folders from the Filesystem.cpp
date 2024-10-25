class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> result;
        for (auto& dir : folder) {
            if (result.empty() || dir.compare(0, result.back().size(), result.back()) != 0 || dir[result.back().size()] != '/') {
                result.push_back(move(dir));
            }
        }
        
        return result;
    }
};

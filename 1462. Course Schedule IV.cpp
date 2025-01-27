class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<bool>> reachable(numCourses, vector<bool>(numCourses, false));
        
        for (auto &p : prerequisites) {
            int u = p[0];
            int v = p[1];
            reachable[u][v] = true;
        }
        
        for (int k = 0; k < numCourses; k++) {
            for (int i = 0; i < numCourses; i++) {
                for (int j = 0; j < numCourses; j++) {
                    if (reachable[i][k] && reachable[k][j]) reachable[i][j] = true;
                }
            }
        }
        
        vector<bool> ans;
        ans.reserve(queries.size());
        for (auto &q: queries) {
            ans.push_back(reachable[q[0]][q[1]]);
        }
        
        return ans;
    }
};

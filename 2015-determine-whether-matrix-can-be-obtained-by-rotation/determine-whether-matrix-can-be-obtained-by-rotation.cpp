class Solution {
public:
  void solve(vector<vector<int>>& mat){
            int n = mat.size();
            vector<vector<int>>res(n , vector<int>(n));

            for(int i = 0 ; i< n ; i++){
                for(int j = 0 ; j<n ; j++){
                    res[j][n-i-1] = mat[i][j];
                }
            }
            mat = res;
        }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

    
        for (int i = 0; i <= 4; i++) {
            if (mat == target)
                return true;
            solve(mat);
        }

        return false;
    }
};
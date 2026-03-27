class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int row = mat.size();
        int col = mat[0].size();

          k = k%col;
        vector<vector<int>>res;
        for(int i = 0 ; i < row ;i++){
            vector<int>temp(col);
            for(int j = 0 ; j<col ; j++){
                if(i%2==0){
                   temp[j] = mat[i][(j+k)%col];
                }else{
                    temp[j] = mat[i][(j - k + col) % col];
                }
            }
            res.push_back(temp);

        }

        return res == mat;
        
    }
};
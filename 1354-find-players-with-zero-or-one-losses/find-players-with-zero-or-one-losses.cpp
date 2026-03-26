class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>win;
        map<int,int>lose;
        unordered_set<int>st;

        for(auto it : matches){
            win[it[0]]++;
            lose[it[1]]++;
            st.insert(it[1]);

        }

        vector<vector<int>> res;

        // for winner

        vector<int>w;
        for(auto it : win){
            int pl = it.first;
            if(st.find(pl)==st.end()){
                w.push_back(pl);
            }
        }

        // for loose 1 
        vector<int>ls;
        for(auto it : lose){
            int pl = it.first;
            if(lose[pl]==1){
                ls.push_back(pl);
            }
        }

        res.push_back(w);
        res.push_back(ls);
        return res;
        
    }
};
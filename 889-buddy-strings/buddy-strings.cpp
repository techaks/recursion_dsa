class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) {
            return false;
        }

        int counter = 0;
        int n = s.size();
        unordered_map<char, int> mp;

        if (s == goal) {
            for (int i= 0; i < n; i++) {
                mp[s[i]]++;
                if (mp[s[i]] == 2) {
                    return true;
                }
            }
            return false;
        }
        vector<int>result;
        for(int i=0;i<n;i++){
            if(s[i] != goal[i]){
                result.push_back(i);
                
            }
            
        }
        if(result.size() != 2){
            return false;
        }
        swap(s[result[0]],s[result[1]]);
        
        return s==goal;
    }
};
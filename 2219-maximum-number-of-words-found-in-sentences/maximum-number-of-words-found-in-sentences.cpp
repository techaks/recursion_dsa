class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int maxi = 0;

        for(string s : sen ){
           int  count = 0;
            for(char ch : s){
                if(ch == ' ')count++;
            }
            count++;
            maxi=max(count , maxi);
        }

        return maxi;
    }
};
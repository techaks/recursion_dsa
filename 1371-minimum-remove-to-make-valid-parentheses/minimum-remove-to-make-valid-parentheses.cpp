class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string temp;
        int open = 0;

        // Pass 1: remove extra )
        for(char c : s){
            if(c == '('){
                open++;
                temp.push_back(c);
            }
            else if(c == ')'){
                if(open > 0){
                    open--;
                    temp.push_back(c);
                }
                // else skip invalid )
            }
            else{
                temp.push_back(c); 
            }
        }

        // Pass 2: remove extra (
        string result;
        int close = 0;

        for(int i = temp.size() - 1; i >= 0; i--){
            char c = temp[i];
            if(c == ')'){
                close++;
                result.push_back(c);
            }
            else if(c == '('){
                if(close > 0){
                    close--;
                    result.push_back(c);
                }
                // else skip invalid (
            }
            else{
                result.push_back(c);
            }
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
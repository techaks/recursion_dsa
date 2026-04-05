class Solution {
public:
    bool judgeCircle(string moves) {
        int x =0, y = 0;

        for(char ch : moves){
            if(ch=='U') y++;
            else  if(ch=='R')x++;
            else  if(ch=='L')x--;
            else y--;

        
        }

        return( !x && !y);
        
    }
};
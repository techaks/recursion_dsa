class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int res = 0;
        int i = 0;
        while(n){
            int r = n%2;
            res+= pow(2,i) * (!r);
            i++;
            n/=2;
        }

        return res;
        
    }
};
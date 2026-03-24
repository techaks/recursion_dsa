class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a = 0 ;
        int b = 0 ;

        for(int it : nums){
            if(it>9){
                a+=it;
            }else{
                b+=it;
            }
        }

        return a!= b;
        
    }
};
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;

        while(numBottles >= numExchange){
            int remain =  numBottles / numExchange;
            res+= remain ;
            numBottles = numBottles % numExchange + remain;
        }
        

        return res;
    }
};
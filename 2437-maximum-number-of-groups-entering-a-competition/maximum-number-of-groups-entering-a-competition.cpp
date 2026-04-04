class Solution {
public:
    int maximumGroups(vector<int>& grades) {

        sort(grades.begin(),grades.end());
        int currSum =0 ;
        int currSize =0;
        int groups =0;
        int preSum =0;
        int preSize = 0;
        

        for(int i = 0 ; i<grades.size();i++){

           currSize++;
           currSum += grades[i];

           if(currSize > preSize && currSum > preSum){
            groups++;

            preSum = currSum;
            preSize = currSize;
            currSum=0;
            currSize=0;
           }
            
        }

        return groups;
        
    }
};
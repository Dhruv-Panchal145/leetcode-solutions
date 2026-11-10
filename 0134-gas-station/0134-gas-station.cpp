class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int n = gas.size();
         int totalKamai = accumulate(begin(gas), end(gas), 0); // this function calculate the total of gas e.g. for example 1  = 15
         int totalKarcha = accumulate(begin(cost), end(cost), 0); // same like cost = 15

         if(totalKamai < totalKarcha){
            return -1;
         }

         int result_idx = 0;
         int total = 0;

         for(int i = 0; i < n; i++){

          total = total + gas[i] - cost[i];

           if(total < 0){
             result_idx = i + 1;
             total = 0;
           }
         }
         return result_idx;
    }
};
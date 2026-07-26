class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 != 0) return -1.0;

      long binFrom = n;
       if (n < 0) {
        x = 1/x;
        binFrom = -binFrom;
       }
       double ans = 1;
       while(binFrom > 0){
       if(binFrom%2 == 1) { // binFrom odd hai ya nahi
          ans = ans * x;
       }
          x = x * x; // double the base
          binFrom = binFrom / 2; // half of the power
       }
       return ans;
    }
};
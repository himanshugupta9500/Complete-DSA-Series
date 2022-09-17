class Solution {
public:
    double myPow(double x, int n) {
       int exp= abs(n);
     double ans= solve(x,exp);   
     return n>=0?ans:1/ans;
    }
    double solve(double x,int exp){
         if(x==0) return 0;
        if(exp==0) return 1;
        
        
        double half= myPow(x,exp/2);
        if((exp%2)==0) return half*half;
        else return half*half*x;
    }
};
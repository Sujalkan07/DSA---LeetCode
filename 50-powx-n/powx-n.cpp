class Solution {
public:
    double myPow(double x, int exp) {
        long long n=exp ;
        bool negative = n<0;
        if(n<0){
            n=-n;
        }
        double result= power(x,n);
        if(negative){
            return 1.0/result;
        }
        return result;
    }
    double power(double x, long long n){
        if(n==0){
            return 1.0;
        }
        double half=power(x,n/2);
            if(n%2==0){
                return half*half;
            }
            else{
                return x*half*half;
            }
    }    
};
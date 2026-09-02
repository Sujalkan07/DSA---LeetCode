class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        double pow=1;
        if(N<0){
            x=1/x;
            N=-N;
        }
        while(N>0){
            if(N%2==1){
            pow=pow*x;
            }
            x*=x;
            N/=2;
        }
        return pow;
    }
};
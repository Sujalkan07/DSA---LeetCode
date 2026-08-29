class Solution {
public:
    int reverse(int x) {
        int temp = x; 
        
        long long rev =0;
        while(temp!=0){
            int ld = temp%10;
            rev = rev*10 + ld;
            temp /= 10;
        }
        if(rev > INT_MAX || rev <INT_MIN){
            return 0;
        }
        else {
        return rev;
        }
    }
};
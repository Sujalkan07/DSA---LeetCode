class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();

        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]= s[i]-'A'+'a';
            }
        }
        int st=0;int end=n-1;
        while(st<end){
            if(!(isalnum(s[st]))){
                st++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(s[st]!=s[end]){
                return false;
            }
            else{
                st++;
                end--;
            }
        }
            return true;
    }
};
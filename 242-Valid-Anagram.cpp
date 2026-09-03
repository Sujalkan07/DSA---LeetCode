class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vec(26,0);
        for(int i=0;i<s.length();i++){
            int idx=s[i]-'a';
            vec[idx]++;
        }
        for(int i=0;i<t.length();i++){
            int idx=t[i]-'a';
            vec[idx]--;
        }
        for(int i=0;i<26;i++){
            if(vec[i]!=0){
                return false ;
            }
        }
        return true;
    }
};
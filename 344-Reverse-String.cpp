class Solution {
public:
    void reverseString(vector<char>& s) {
        int i =0,j=s.size()-1;
        while(i<j){
            char temp = s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        cout<<"[";
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<",";
        }
        cout<<"]";
    }
};
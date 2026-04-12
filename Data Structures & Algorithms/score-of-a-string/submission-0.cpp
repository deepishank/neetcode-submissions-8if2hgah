class Solution {
public:
    int scoreOfString(string s) {
        int st=0;
        int n=s.size();
        for(int i=1;i<n;i++){
            st+=abs(s[i]-s[i-1]);
        }
        return st;
    }
};
class Solution {
public:
    string largestGoodInteger(string num) {
        char maxDigit='0'-1;
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i]== num[i+2]){
                maxDigit=max(maxDigit,num[i]);
            }
        }
        if(maxDigit<'0') return "";
        return string(3,maxDigit);

    }
};
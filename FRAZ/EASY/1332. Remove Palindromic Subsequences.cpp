class Solution {
    private :
    bool ispalindrome(string s){
        int i = 0 ;
        int j = s.length()-1;
        while(i<=j)
        {
            if(s[i]!=s[j]){
                return 0;
                break;
            }
            i++;
            j--;
        }
        return 1;
    }
public:
    int removePalindromeSub(string s) {
        if(ispalindrome(s)){
            return 1;
        }
        else {
            return 2;
        }
    }
};

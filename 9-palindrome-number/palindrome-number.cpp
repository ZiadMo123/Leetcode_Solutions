class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        string reverseNum = num;

        reverse(num.begin(), num.end());

        if(num == reverseNum){
            return true;
        }

        return false ;
    }
};
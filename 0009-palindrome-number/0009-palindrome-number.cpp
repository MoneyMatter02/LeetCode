class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0; 
        int copy = x;
        if(x<0){
            return false;
        }
        while(x!=0){
            int digit = x%10;
            if (rev<(INT_MIN)/10||rev>(INT_MAX)/10){
                return 0; 
            }
            rev = (rev*10)+digit;
            x = x/10;
        }
        if (rev == copy){
            return true;
        }
        return false;
    } 
};
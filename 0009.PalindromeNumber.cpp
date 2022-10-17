//Given an integer x, return true if x is palindrome integer.

//An integer is a palindrome when it reads the same backward as forward.

class Solution {
public:
    
    long int reverseNumber(int j){
        long int reverse=0;
        long int remainder;
        
        while (j!=0){
            remainder=j%10;;
            reverse=reverse*10+remainder;
            j/=10;
        }
        
        return reverse;    
    }
    
    bool isPalindrome(long int x) {
        if(x<0){
            return false;
        }else{
            long int p=reverseNumber(x);
            if (p == x){
                return true;
            }else return false;
        }
    }
};
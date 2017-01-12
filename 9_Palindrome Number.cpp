/*
Determine whether an integer is a palindrome. Do this without extra space.
回文数判断*/

class Solution {
public:
    bool isPalindrome(int x) {
         if(x<0)
        return false;

    int num=x;
    int a=0;
    while(x)
    {
        a=a*10 + x%10;
        x=x/10;
    }
    if(a==num)
        return true;
    else
        return false;
    
    }
};
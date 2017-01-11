/* Implement atoi to convert a string to an integer.

Hint: Carefully consider all possible input cases. If you want a challenge, please do not see below and ask yourself what are the possible input cases.

Notes: It is intended for this problem to be specified vaguely (ie, no given input specs). You are responsible to gather all the input requirements up front.

Update (2015-02-10):
The signature of the C++ function had been updated. If you still see your function signature accepts a const char * argument, please click the reload button to reset your code definition. 
*/

class Solution {
public:
    int myAtoi(string str) {
        
        
    long result = 0;
    int indicator = 1;
    
    for(int i = str.find_first_not_of(' '); i<str.size();i++)
    {
         if (str[i]=='+' && str[i+1]=='-') return 0;
         if (str[i]=='-' && str[i+1]=='+') return 0;
         if (str[i]=='+' && str[i+1]=='+') return 0;
         if (str[i]=='-' && str[i+1]=='-') return 0;
        if (str[i]=='+') indicator=1;
        else
         if (str[i]=='-') indicator=-1;
        else
       if('0'<= str[i] && str[i] <= '9') 
        {
            
            result = result*10 + (str[i]-'0');
            if(result*indicator >= INT_MAX) return INT_MAX;
            if(result*indicator <= INT_MIN) return INT_MIN;    
              
        }
        else return indicator*result;
       
    }
    return indicator*result;

    }
};
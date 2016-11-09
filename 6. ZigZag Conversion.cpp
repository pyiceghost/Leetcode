//  The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R

// And then read line by line: "PAHNAPLSIIGYIR"

// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string text, int nRows);

// convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR".

class Solution {
public:
    string convert(string s, int nRows) {
       if(nRows == 1)return s;
        int len = s.size(), k = 0, interval = (nRows<<1)-2;
        string res(len, ' ');
        for(int j = 0; j < len ; j += interval)
            res[k++] = s[j];
        for(int i = 1; i < nRows-1; i++)
        {
            int inter = (i<<1);
            for(int j = i; j < len; j += inter)
            {
                res[k++] = s[j];
                inter = interval - inter;
            }
        }
        for(int j = nRows-1; j < len ; j += interval)
            res[k++] = s[j];
        return res;
    }
};
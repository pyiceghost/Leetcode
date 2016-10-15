/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321
*/

//注意反转后超过int范围

class Solution {
public:
    int reverse(int x) {
        int a[10];
        int f=0;
        for(int i=0;i<10;i++)
        a[i]=0;
        int num=-1;
        int t;
        if(x==0)return 0;

        while(x!=0)
        {
              num++;
            a[num]=x%10;
            x=x/10;

        }

        int c=1;
        x=0;
        if(num == 9 &(a[0]>2||a[0]<-2))return 0;
        if(num == 9&(a[0]==2||a[0]==-2))f=1;
        while(num>=0)
        {
            x+=a[num]*c;
            c*=10;
            num--;
            if(f==1 &(x>147483647 || x<-147483648)&num>=0) f=2;
        }
       if(f==2)return 0;
        return x;
    }
};
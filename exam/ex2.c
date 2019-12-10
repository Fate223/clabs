#include <stdio.h>
int main()
{
    char x[9];
    char y[9];
    char a;
    int i,p;
    float n =0;
    float m =0;
    float k;
    for (i = 0 ; i<10;i=i+1)
    {
        x[i] = getchar();
        if(x[i]==' ')
        {
            break;
        }
        n=n*10+(x[i]-'0');
    }
    if (x[i]==' ')
    {
       for (p=0;p<10;p=p+1)
       {
         y[p]=getchar();
         if (y[p]==' ')
         {
            break;
         }
         m=m*10+(y[p]-'0');
       }
       if (y[p]==' ')
       {
           a=getchar();
           if (a=='+')
           {
               k=n+m;
           }
           else if(a=='-')
           {
               k=n-m;
           }
           else if(a=='*')
           {
               k=n*m;
           }
           else if (a=='/'&& m!=0)
           {
               k=n/m;
           }
           else if (a=='/'&& m==0)
           {
               printf("error cannot divide a number by 0");
           }
       }
    }
    printf("the expression has a value of :%.1f",k);
}
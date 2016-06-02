#include<stdio.h>
#include<cs50.h>

int main (void)

{
    float n;
     printf("hi, how much money is owed: ");
     do
     {
         n = GetFloat();
     }while(n<0);
     
     int a=0,c,d,e,g;
     c=n*100;
    
     while(c>=25)
     {
         a++;
     c=c-25;
     
     }
     d=c%25;
     
     while(d>=10)
     {a++;
     d=d-10;
     
     }
     
     e=d%10;
     while(e>=5)
     {a++;
     e=e-5;
     
     }
     
     g=e%5;
     while(g>=1)
     {a++;
     g=g-1;
     
     }
     
      printf("number of coins = %i", a);
}
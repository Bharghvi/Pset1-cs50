#include<stdio.h>
#include<cs50.h>

int main (void)

{
    printf("Height");
    int n;
    do
    {
        n = GetInt();
    }while(n<=0 || n>23);
    
    for(int i = 1; i<=n; i++)
    {
        for(int c = 1; c<=n-i; c++)
        
        printf(" ");
        
        {
            for(int c=1; c<=i+1;c++)
            {
                
                printf("#");
            }
            printf("\n");
        }
    }
}
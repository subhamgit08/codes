#include<stdio.h>
void main()
{
    int i,n1,gcd,n2;
    printf("enter number1");
    scanf("%d",&n1);
    printf("enter number2");
    scanf("%d",&n2);
    if(n1>n2)
    {
        for(i=1;i<=n2;i++)
        {
            if(n1%i==0 && n2%i==0)
            gcd=i;
            
        }
    }
    else
    {
        for(i=1;i<=n1;i++)
        {
            if(n1%i==0 && n2%i==0)
            gcd=i;
        }
           
        
    }
    printf("%d",gcd);
}
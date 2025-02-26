#include<stdio.h>
void main()
{
    int i,n,a,s;
    a=s=0;
    printf("limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        a=-(i*i);
        else
        a=(i*i);
        s=s+a;

    }
    printf("%d",s);
}
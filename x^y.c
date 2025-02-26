#include<stdio.h>
void main()
{
    int s=1,x,y,i;
    printf("x=");
    scanf("%d",&x);
    printf("y=");
    scanf("%d",&y);
    for(i=0;i<y;i++)
    {
        s=s*x;
    }
        printf("%d",s);

    
}
#include<stdio.h>
void main()
{
 int a,b;
 printf("oparends");
 scanf("%d %d",&a,&b);
int c;
/*printf("enter your choice:-\n 1->+\n 2->-");*/
scanf("%c",&c);
 switch(c)
 {
    case 1:
    {
        printf("%d",(a+b));
        break;
    }
    case 2:
    {
        printf("%d",(a-b));
        break;

    }
    default:
    {
        printf("invalid choice");
        break;
    }
 }
}
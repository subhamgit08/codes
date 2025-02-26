#include<stdio.h>
void main()
{
    int n;
    printf("number");
    scanf("%d",&n);
    switch(n>0)
    {
        case 1:
        {
            printf("+ve");
            break;
        }
        case 0:
        {
            switch(n<0)
            {
                case 1:
                {
                    printf("-ve");
                    break;
                }
                case 0:
                {
                    printf("zero");
                    break;
                }
            }
        }
    }
}
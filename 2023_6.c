#include <stdio.h>
void main()
{
    int n;
    int s;
    int result = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s = i * i;
        if (i % 2 == 0)
        {
            printf("%d", 0 - s);
            result -= s;
        }
        else
        {
            printf("+%d", s);
            result += s;
        }
    }
    printf("\n%d\n",result);
}
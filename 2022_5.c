#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int f0 = 0;
    int f1 = 1;
    if (n > 0)
    {
        printf("%d ", f0);
    }
    if (n > 1)
    {
        printf("%d ", f1);
    }
    if (n > 2)
    {
        int f2;
        for (int i = 2; i < n; i++)
        {
            f2 = f1 + f0;
            printf("%d ", f2);
            f0 = f1;
            f1 = f2;
        }
    }
}
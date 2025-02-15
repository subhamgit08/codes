#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num == 1)
    {
        printf("%d is non-prime\n", num);
        return 0;
    }
    if (num == 2 || num == 3)
    {
        printf("%d is a prime number\n", num);
        return 0;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is non-prime\n", num);
            return 0;
        }
    }
    printf("%d is a prime number\n", num);
    return 0;
}
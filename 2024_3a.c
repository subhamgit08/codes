#include <stdio.h>

int main()
{
    int a, b, op;
    int output;
    printf("Enter the two numbers\n");
    scanf("%d %d", &a, &b);
    printf("Enter the operation you want to do: \n");
    printf("Enter 1 for +\n");
    printf("Enter 2 for -\n");
    printf("Enter 3 for *\n");
    printf("Enter 4 for /\n");
    printf("Enter 5 for %%\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        output = a + b;
        break;
    case 2:
        output = a - b;
        break;
    case 3:
        output = a * b;
        break;
    case 4:
        output = a / b;
        break;
    case 5:
        output = a % b;
        break;
    default:
        printf("Wrong option entered\n");
    }
    printf("The output is %d\n",output);
    return 0;
}
#include<stdio.h>

int main(){
    int n,x, sum = 1;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%d",&x);
    for (int i = 0; i < n-1; i++)
    {
        int temp = x;
        for (int j = 0; j < i; j++)
        {
            temp *= x;
        }
        sum += temp;
    }
    printf("The output is : %d\n",sum);
    return 0;
}
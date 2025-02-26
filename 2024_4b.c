#include<stdio.h>

int main(){
    int n,x, sum = 1,power =1;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Enter the value of x\n");
    scanf("%d",&x);
    for (int i = 0; i < n-1; i++)
    {
        power *= x;
        sum += power;
    }
    printf("The output is : %d\n",sum);
    return 0;
}
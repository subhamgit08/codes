#include<stdio.h>

int main(){
    int n,num,sum = 0;
    printf("Enter the number of term\n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",i*i);
        if (i % 2 == 0)
        {
            sum -= i*i;
            if (i<n)
            {
                printf("- ");
            }   
        }
        else {
            sum += i*i; 
            if (i<n)
            {
                printf("+ ");
            } 
        }
    }
    printf("\nThe output is : %d\n",sum);
    return 0;
}
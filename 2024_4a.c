#include<stdio.h>

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %dth number\n",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 9; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
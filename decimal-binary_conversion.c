#include<stdio.h>

int main(){
    int n,bi[100],i=0,rem;
    printf("Enter decimal: \n");
    scanf("%d",&n);
    while (n > 0)
    {
        rem = n % 2;
        n /= 2;
        bi[i] = rem;
        i++;
    }
    printf("The binary equivalent is: \n");
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",bi[j]);
    }
    
    return 0;
}
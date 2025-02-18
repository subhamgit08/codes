#include<stdio.h>

int main(){
    int num , temp , hex[100] , oct[100] ;
    char hexdigits[] = "0123456789ABCDEF";
    printf("Enter the decimal number\n");
    scanf("%d",&num);
    int i = 0;
    temp = num;
    while (temp > 0)
    {
        oct[i] = temp % 8;
        temp /= 8;
        i++;
    }
    printf("Octal number : \n");
    for (int j = i-1; j >= 0; j--)
    {
        printf("%d",oct[j]);
    }
    
    i = 0;
    temp = num;
    while (temp > 0)
    {
        hex[i] = temp % 16;
        temp /= 16;
        i++;
    }
    printf("\nHexadecimal number : \n");
    for (int j = i-1; j >= 0; j--)
    {
        printf("%c",hexdigits[hex[j]]);
    }
    return 0;
}
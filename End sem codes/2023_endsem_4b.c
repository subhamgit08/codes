#include<stdio.h>
int main(){
    char str[200];
    fgets(str,200,stdin);
    int i=0;
    while (str[i] != '\n')
    {
        i++;
    }
    char reverse[200];
    int k=0;
    for(int j=i-1;j>=0;j--){
        reverse[k++] = str[j];
    }
    reverse[k] = '\0';
    printf("The reverse string is : \n%s",reverse);
}
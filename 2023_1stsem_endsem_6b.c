#include<stdio.h>
int strl(char strarr[]){
    int i=0;
    while (strarr[i]!='\0')
    {
        i++;
    }
    return i-1;
}
int main(){
    char str[200];
    fgets(str,200,stdin);
    int len = strl(str);
    printf("The length is : %d",len);
    return 0;
}
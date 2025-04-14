#include<stdio.h>
void reversestring(char str[],char reverse[]){
    int i = 0,k=0;
    while (str[i]!='\0')
    {
        i++;
    }
    for (int j = i-1; j >=0; j--)
    {
        reverse[k] = str[j];
        k++;
    }
    reverse[k] = '\0';
}
int main(){
    char str[100],reverse[100];
    fgets(str,100,stdin);
    int i=0;
    while (str[i]!='\0')
    {
        if(str[i]=='\n'){
            str[i] = '\0';
            break;
        }
        i++;
    }
    
    reversestring(str,reverse);
    printf("The string after reversal: %s",reverse);
}
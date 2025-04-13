#include<stdio.h>
void len(char *s){
    int len =0;
    while(*s!='\0'){
        len++;
        s++;
    }
    printf("Length is %d",len);
}
void main(){
    char s[100];
    printf("Enter String");
    scanf("%s",s);
    len(s);
    

}
#include<stdio.h>
void compare(char *s,char *t){
    while(*s!='\0'&&*t!='\0'){
if(*s!=*t){
    printf("not identical");
    return;
}
s++;
t++;
    }
    if(*s!='\0'||*t!='\0'){
        printf("not identical");
    }
    else{
        printf("identical");
    }
}
void main(){
    char s[100], t[100];
    printf("enter string 1");
    scanf("%s",s);
    printf("enter string 2");
    scanf("%s",t);
    compare(s,t);

}
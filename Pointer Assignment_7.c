#include<stdio.h>
void copy(char *s,char *t){
    while (*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
   

}
void main(){
    char s[100], t[100];
    printf("enter copy string");
    scanf("%s",s);
    copy(s,t);
    printf("s=%s, t=%s",s,t);

}
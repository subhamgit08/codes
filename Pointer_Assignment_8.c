#include<stdio.h>
void concatinate(char *s,char *t,char *ans){
    int i=0;
    while(*(s+i)!='\0'){
        *(ans+i)=*(s+i);
        i++;
    }
    int m=0;
    while(*(t+m)!='\0'){
        *(ans+i)=*(t+m);
        i++;
        m++;
    }
    *(ans+i)='\0';
    for(int k=0;k<i;k++){
        printf("%c",*(ans+k));
    }
     
}
void main(){
    char s[100],t[100],ans[100];
    printf("enter string 1");
    scanf("%s",s);
    printf("enter string 2");
    scanf("%s",t);
    concatinate(s,t,ans);
}
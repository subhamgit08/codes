//using pointer delete occurances of a particular chracter from a string
#include<stdio.h>
void del(char *s,char *a,char ch){
    
while(*s!='\0'){
    if(*s!=ch){
        *a=*s;
        a++;
    }
    s++;
}
*a='\0';

}
void main(){
    char s[100],ans[100],ch;
    printf("enter string");
    scanf("%s",s);
    printf("enter character to delete");
    scanf(" %c",&ch);
    del(s,ans,ch);
    printf("%s",ans);

    
}
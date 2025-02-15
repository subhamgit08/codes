#include<stdio.h>
void main(){
    int n,f=1;

    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    printf("%d",f);
}
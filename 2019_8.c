#include<stdio.h>
void main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("%d",evenORodd(n));
}
int evenORodd(int n){
    if(n%2==0){
        return 0;

    }
    else{
        return 1;
    }
}
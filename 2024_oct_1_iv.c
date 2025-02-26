#include<stdio.h>
void main(){
    int a=5;
    int x=a++;
    int y= ++a;
    printf("%d %d %d",a,x,y);
}
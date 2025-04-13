#include<stdio.h>
void swap(int *a ,int *b){
    int t= *a;
    *a=*b;
    *b=t;
    printf("after swapping\n a=%d,b=%d",*a,*b);
}
void main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("before swapping\n a=%d,b=%d\n",a,b);
    swap(&a,&b);

}
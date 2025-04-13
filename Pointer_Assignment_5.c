#include<stdio.h>
void main(){
    int arr[100],n;
    printf("enter size");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("before reverse\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int *s= arr;
    int *e= arr+n-1;
    while(*s<*e){
        int t= *e;
        *e=*s;
        *s=t;
        s++;
        e--;
    }
    printf("\n");
    printf("after reverse\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
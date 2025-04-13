#include<stdio.h>
void copy(int *p1,int *p2,int n){
     for(int i=0;i<n;i++){
        *(p2+i)=*(p1+i);
     }
     printf("arr 2 is\n");
     for(int i=0;i<n;i++){
        printf("%d ",*(p2+i));
     }
}
void main(){
    int arr1[100],arr2[100],n;
    printf("enter size");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("arr 1 is\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    copy(arr1,arr2,n);
}
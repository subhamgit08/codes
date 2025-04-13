#include<stdio.h>
void swap(int *p1,int *p2,int n){
     for(int i=0;i<n;i++){
        int t=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=t;
     }
     printf("arr 1 is\n");
     for(int i=0;i<n;i++){
        printf("%d ",*(p1+i));
     }
     printf("\n");
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
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    printf("arr 1 is\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("arr 2 is\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    swap(arr1,arr2,n);
}

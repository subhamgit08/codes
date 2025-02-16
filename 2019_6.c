#include<stdio.h>
void main(){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("enter %dth element",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        int k=0;
        for(int j=0;j<10;j++){
           if(arr[i]==arr[j]){
            k++;
           }
           
        }
        printf("%d occurs %d times\n",arr[i],k);
    }
}
#include<stdio.h>
void main(){
    int n=10,arr[10];
    float s=0;
    for(int i=0;i<10;i++){
         scanf("%d",arr[i]);
    }
    for(int i=0;i<10;i++){
        s=s+arr[i];
   }
   printf("Sum=%d",s);
   printf("avg=%d",s/3);

}
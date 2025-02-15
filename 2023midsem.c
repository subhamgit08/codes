#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",k++);
        }
       printf("\n");
    }
}
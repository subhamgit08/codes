#include<stdio.h>
int sum(int *p,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+*(p+i);
    }
    return sum;


}
void main(){
    int arr[100],n;
    printf("enter size");
    scanf("%d",&n);
    printf("enter array elements");
    for (int i = 0; i < n; i++){
    
       scanf("%d",&arr[i]);
    }
    int s= sum(arr,n);
    printf("\n sum =%d",s);
    
}
#include<stdio.h>
int maximum(int arr[],int n){
    int max = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max = arr[i];
    }
    return max;
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m = maximum(arr,n);
    printf("The maximum element is : %d",m);
}
#include<stdio.h>
void series(int n){
    int num0 = 0 , num1= 1;
    if(n>=1) printf("%d ",num0);
    if(n>=2) printf("%d ",num1);
    for(int i=0;i<n;i++){
        int num2 = num0 + num1;
        printf("%d ",num2);
        num0 = num1;
        num1 = num2;
    }
}
int main(){
    int n;
    printf("Enter the range: ");
    scanf("%d",&n);
    series(n);
}
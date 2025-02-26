#include<stdio.h>
void main(){
    int n;
    int i=0;
    scanf("%d",&n);
    int c[100];
    while(n!=0){
        int e = n%8;
        c[i]=e;
        n=n/8;
        i++;
    }
    for(int j=i;j>0;j--){
      printf("%d",c[j]);
    }
}
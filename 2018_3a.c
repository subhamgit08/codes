#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int a[100];
    int j=0;
    
    for(int m=1;m<=n;m++){
       if(n%m==0&&m%2!=0){
        a[j]=m;
        j++;
       }
    }
    for (int k = 0; k< j; k++)
    {
        /* code */
        printf("%d ",a[k]);
    }
    
}
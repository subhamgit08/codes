#include<stdio.h>
void main(){
    int n;
    int i=0;
    int hex[100];
    scanf("%d",&n);
    char hexadigit[]="0123456789ABCDEF";
    while(n!=0){
        int e= n%16;
        hex[i]=e;
        i++;
        n=n/16;  
    }
    for (int j = i-1; j>=0; j--)
    {
      printf("%c",hexadigit[hex[j]]);

    }
    
}
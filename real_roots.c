#include<stdio.h>

int main(){
    int a,b,c , root1,root2;
    scanf("%d %d %d",&a , &b,&c);
    if ((b*b - 4*a*c) >= 0)
    {
        root1 = (-b + (b*b - 4*a*c)) / (2*a);
        root2 = (-b - (b*b - 4*a*c)) / (2*a);
    }
    else{
        printf("No real root exists\n");
        return 0;
    }
    printf("The roots are %d and %d\n",root1,root2);
    return 0;
}
#include<stdio.h>

int main(){
    int x , y;
    scanf("%d %d",&x,&y);
    if (y == 0)
    {
        printf("1\n");
        return 0;
    }
    int temp = x;
    for (int i = 0; i < y-1; i++)
    {
        x *= temp;
    }
    printf("%d\n",x);
    return 0;
}
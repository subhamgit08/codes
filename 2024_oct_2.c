#include<stdio.h>
void main(){
    int f,c,choice;
    printf("enter your choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("enter centegrade scale");
        scanf("%d",&c);
        int ans=(c/5)*9+32;
        printf("%d celcius = %d F",c,ans);
        break;
        case 2:
        printf("enter farenhite scale");
        scanf("%d",&f);
        int sol=(f-32)*5/9;
        printf("%d F=%d celcius",f,sol);
        break;
    
    default:
        printf("invalid choice");
        break;
    }
}
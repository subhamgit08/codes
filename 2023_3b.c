#include<stdio.h>
void main(){
    int x,y;
    
   
     printf("enter base");
    scanf("%d",&x);
    int s=x;
    printf("enter power");
    scanf("%d",&y);
    for(int i=1;i<y;i++){
         
        s=s*x;
    }
    printf("%d",s);

}
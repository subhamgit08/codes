#include<stdio.h>
struct complex{
    int real;
    int img;
};
void add(int x1,int y1,int x2,int y2){
     int r = x1+x2;
     int c= y1+y2;
     if(c<0){
        
        printf("ans is %d - i%d",r,c*-1);
     }
     else{
        printf("ans is %d + i%d",r,c);
     }
}
 void main(){

    struct complex n1,n2,r;
  printf("enter x1 and y1 in x1+iy1");
    scanf("%d%d",&n1.real,&n1.img);
    printf("enter x2 and y2 in x2+iy2");
    scanf("%d%d",&n2.real,&n2.img);
    add(n1.real,n1.img,n2.real,n2.img);

   
    
}
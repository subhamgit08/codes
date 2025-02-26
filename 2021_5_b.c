#include<stdio.h>
int f(int x){
    return x;

}
void main(){
    int g,h;
    int x;
    scanf("%d",&x);
    g=2*x*x + 6;
    h=6*x*x + 2;
  int a=f(g);
  int b=f(h);
  int c=f(g+h);
  if (a+b==c)
  {
    printf("true");
  }
  else{
    printf("false");
  }
  
}

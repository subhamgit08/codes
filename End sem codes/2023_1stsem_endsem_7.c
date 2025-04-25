#include<stdio.h>
typedef struct{
    int real;
    int img;
}complex;
complex addition(complex c1 ,complex c2){
    complex res = {c1.real+c2.real,c1.img+c2.img};
    return res;
}
void display(complex res){
    char c;
    if(res.img > 0) c = '+';
    else{
        c = '-';
        res.img = 0 - res.img;
    }
    printf("The answer is : %d %c i%d",res.real,c,res.img);
}
int main(){
    complex c1 , c2;
    printf("Enter the real part of the first number: ");
    scanf("%d",&c1.real);
    printf("Enter the imaginary part of the first number: ");
    scanf("%d",&c1.img);
    printf("Enter the real part of the second number: ");
    scanf("%d",&c2.real);
    printf("Enter the imaginary part of the second number: ");
    scanf("%d",&c2.img);
    complex res = addition(c1,c2);
    display(res);
    return 0;
}
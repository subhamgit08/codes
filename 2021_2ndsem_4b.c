#include<stdio.h>
void main(){
    FILE *f,*g;
    char f1[100],g1[100];
    printf("enter file name of source file");
    scanf("%s",f1);
    printf("enter file name of target file");
    scanf("%s",g1);
    f= fopen(f1,"r");
    g= fopen(g1,"w");
    char ch= fgetc(f);
    while (ch!=EOF)
    {
      fputc(ch,g);  
      ch= fgetc(f);
    }
    fclose(f);
    fclose(g);
    printf("file copied");


}
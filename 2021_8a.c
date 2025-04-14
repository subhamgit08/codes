#include<stdio.h>
void main(){
    FILE *f;
    FILE *g;
    char c,d;
    f= fopen("file1.txt","r");
    g= fopen("file2.txt","r");
    while(c!=EOF&& d!=EOF){
        c=fgetc(f);
        d=fgetc(g);
        if (c!=d)
        {
            printf("different files");
            fclose(f);
            fclose(g);
            return;
        }
        
    }
    if(c!=EOF||d!=EOF){
        printf("different files");
        fclose(f);
        fclose(g);
        return; 
    }
    printf("identical files");
        fclose(f);
        fclose(g);
}
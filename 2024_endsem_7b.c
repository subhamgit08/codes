#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char file1[100] , file2[100];
    FILE *f1,*f2;
    f1 = fopen("FILE_1.txt","w");
    f2 = fopen("FILE_2.txt","w");
    printf("Enter the content of the file 1: ");
    // scanf("%s",file1);  for single word comparison
    fgets(file1, sizeof(file1), stdin); // for multiword comparison
    printf("Enter the content of the file 2: ");
    // scanf("%s",file2);
    fgets(file2, sizeof(file2), stdin);
    if(f1==NULL||f2==NULL){
        printf("Error opening file\n");
        return 1;
    }
    fputs(file1,f1);
    fputs(file2,f2);
    fclose(f1);
    fclose(f2);

    f1 = fopen("FILE_1.txt", "r");
    f2 = fopen("FILE_2.txt", "r");

    if (f1 == NULL || f2 == NULL) {
        printf("Error reopening file for reading\n");
        return 1;
    }
    int flag = 1;
    int ch1,ch2;
    while(1){
        ch1 = fgetc(f1) ;
        ch2 = fgetc(f2);
        if(ch1!=ch2){
            flag = 0;
            break;
        }
        if(ch1 == EOF || ch2 == EOF){
            break;
        }
    }
    if(flag && ch1 == EOF && ch2 == EOF){
        printf("The files are Identical\n");
    }
    else{
        printf("The files are Non-Identical\n");
    }
    fclose(f1);
    fclose(f2);
    return 0;
}

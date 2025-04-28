//Risky to write in exam but a better approach
// #include<stdio.h>
// typedef struct{
//     int roll;
//     char name[50];
//     int marks;
// }student;

// int main(){
//     FILE *file;
//     int n;
//     printf("Enter the numbers of students: ");
//     scanf("%d",&n);
//     getchar();
//     student s;
//     file = fopen("myfile.txt","w");
//     if (file == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }
//     for(int i=0;i<n;i++){
//         printf("Student %d:\n",i+1);
//         printf("Enter the name: ");
//         fgets(s.name,50,stdin);
//         printf("Enter the roll no: ");
//         scanf("%d",&s.roll);
//         printf("Enter the marks: ");
//         scanf("%d",&s.marks);
//         getchar();
//         fprintf(file,"Student %d:\n",i+1);
//         fprintf(file," Name: %s",s.name);
//         fprintf(file," Roll No.: %d\n Marks: %d\n",s.roll,s.marks);
//     }
//     fclose(file);
//     printf("Data stored successfully\n");
//     return 0;
// }

//safe to write in exam
#include<stdio.h>
int main(){
    FILE *file;
    int n;
    int roll,marks;
    char name[50];
    printf("Enter the numbers of students: ");
    scanf("%d",&n);
    // getchar();
    file = fopen("myfile.txt","w");
    if (file == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("Student %d:\n",i+1);
        printf("Enter the name: ");
        // fgets(name,50,stdin);
        scanf("%s",name);
        printf("Enter the roll no: ");
        scanf("%d",&roll);
        printf("Enter the marks: ");
        scanf("%d",&marks);
        // getchar();
        fprintf(file,"Student %d:\n",i+1);
        fprintf(file," Name: %s\n",name);
        fprintf(file," Roll No.: %d\n Marks: %d\n",roll,marks);
    }
    fclose(file);
    printf("Data stored successfully\n");
    return 0;
}
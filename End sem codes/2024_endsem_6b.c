#include<stdio.h>
typedef struct
{
    char en_no[50];
    char name[50];
    int year;
    int dep_no;
    float cgpa;
}student;

void input(student std[], int n){
    for(int i=0;i<n;i++){
        printf("Enter name: ");
        scanf(" %s",std[i].name);
        printf("Enter enrolment no: ");
        scanf(" %s",std[i].en_no);
        printf("Enter year: ");
        scanf(" %d",&std[i].year);
        printf("Enter department no: ");
        scanf(" %d",&std[i].dep_no);
        printf("Enter cgpa: ");
        scanf(" %f",&std[i].cgpa);
    }
}

void display(student std[],int n){
    for(int i=0;i<n;i++){
        if(std[i].cgpa>=9){
            printf("Name: %s\n",std[i].name);
            printf("year: %d\n",std[i].year);
            printf("enrolment no: %s\n",std[i].en_no);
            printf("department no: %d\n",std[i].dep_no);
            printf("cgpa: %.2f\n",std[i].cgpa);
        }
    }
}
int main(){
    int n;
    printf("Enter the number of the students: ");
    scanf("%d",&n);
    student std[n];
    input(std,n);
    printf("The students having cgpa greater than or equal to 9 is: \n");
    display(std,n);
    return 0;
}
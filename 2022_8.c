#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int class;
    int roll;
};

int main() {
    FILE *fp;
    struct Student s;
    int n, i;

    // Create a new file or overwrite if it exists
    fp = fopen("students.txt", "w");  
    if (fp == NULL) {
        printf("❌ Error creating file!\n");
        return 1;
    }

    printf("✅ File 'students.txt' created successfully.\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", s.name); // To read string with spaces

        printf("Class: ");
        scanf("%d", &s.class);

        printf("Roll No: ");
        scanf("%d", &s.roll);

        // Write to file
        fprintf(fp, "Name: %s, Class: %d, Roll No: %d\n", s.name, s.class, s.roll);
    }

    fclose(fp);
    printf("\n %d Student records saved to 'students.txt' successfully.\n", n);

    return 0;
}

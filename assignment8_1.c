#include <stdio.h>
#include <string.h>

// Function Prototypes
void reverse(char *str);
void swap(int *a, int *b);
void expo(int x, int n);

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    
    s[strcspn(s, "\n")] = '\0';

    rs(s);
    printf("\n");

    int a = 5, b = 10;
    swap(&a, &b);
    printf("\nSwapped values: a=%d, b=%d\n", a, b);

    expo(2, 3);

    return 0;
}


void rs(char *str) {
    int i = 0, j = 0;
    
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';


    printf(" %s", str);
}

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

// Function to calculate exponentiation
void expo(int x, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    printf("\nExponentiation result: %d\n", result);
}

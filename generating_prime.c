#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n >= 2) {
        printf("Prime numbers from 1 to %d are: ", n);
    }

    for (int num = 2; num <= n; num++) {
        int is_prime = 1; 
        for (int i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}

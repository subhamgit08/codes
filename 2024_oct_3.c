#include <stdio.h>

double series_sum(double x, int terms) {
    double sum = 0.0;
    double power = x;  // Start with x^1

    for (int i = 1; i <= terms; i++) {
        if (i % 2 != 0) {
            sum += power;  // Add for odd powers (1, 3, 5,...)
        } else {
            sum -= power;  // Subtract for even powers (2, 4, 6,...)
        }
        power *= x;  // Multiply the previous power of x to get the next power
    }
    return sum;
}

int main() {
    double x;
    int terms;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms to calculate: ");
    scanf("%d", &terms);

    double result = series_sum(x, terms);
    printf("The sum of the series is: %lf\n", result);

    return 0;
}

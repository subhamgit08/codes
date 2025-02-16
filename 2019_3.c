#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    char s = 'A'; // Initialize s as a single character, not a string
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", s);
            s++; // Increment s to the next character
        }
        printf("\n");
    }
}

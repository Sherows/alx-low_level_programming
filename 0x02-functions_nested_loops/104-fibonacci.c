#include <stdio.h>

int main(void)
{
    int fibonacci[50];
    int i;

    // Initialize the first two Fibonacci numbers
    fibonacci[0] = 1;
    fibonacci[1] = 2;

    // Compute the remaining Fibonacci numbers
    for (i = 2; i < 50; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Print the Fibonacci numbers separated by comma and space
    for (i = 0; i < 49; i++) {
        printf("%d, ", fibonacci[i]);
    }

    // Print the last Fibonacci number without a trailing comma
    printf("%d\n", fibonacci[49]);

    return 0;
}


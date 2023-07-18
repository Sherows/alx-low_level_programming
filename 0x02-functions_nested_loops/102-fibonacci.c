#include <stdio.h>

int main() {
    int count = 50;  // Number of Fibonacci numbers to print
    int first = 1;   // First Fibonacci number
    int second = 2;  // Second Fibonacci number

    printf("%d, %d", first, second);  // Print the first two numbers

    for (int i = 3; i <= count; i++) {
        int next = first + second;
        printf(", %d", next);

        // Shift the values to calculate the next Fibonacci number
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}


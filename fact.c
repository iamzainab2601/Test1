#include <stdio.h>

factorial() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error handling for negative numbers
    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to multiply numbers from 1 to n
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    //return 0;
}


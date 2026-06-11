#include <stdio.h>

// Function definition to find the maximum
int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

biggest2() {
    int num1 = 45;
    int num2 = 82;
    
    int result = findMaximum(num1, num2);
    printf("The biggest number is: %d\n", result);
    
    //return 0;
}

#include <stdio.h>

int main() {
    int x, y, sum;

    // Prompt the user for input
    printf("Enter the first number (x): ");
    scanf("%d", &x);

    printf("Enter the second number (y): ");
    scanf("%d", &y);

    // Calculate the sum
    sum = x + y;

    // Print the result
    printf("Your sum is %d + %d = %d\n", x, y, sum);

    return 0;
}

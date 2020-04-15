/**
 * Let's learn about scanf and its return value.
 * scanf returns the number of values it successfully scans.
 * We can use this return value to keep scanning for user
 * input.
 */

#include <stdio.h>

int main(void) {
    // printf("Enter a number: ");
    // int value = -1;
    // int value2 = -1;
    // int result = scanf("%d %d", &value, &value2);
    // printf("Result: %d\n", result);

    int value = -1;
    while (scanf("%d", &value) == 1) {
        printf("Scanned in %d\n", value);
    }

    return 0;
}
/**
 * Creating functions for a calculator.
 */

#include <stdio.h>

// y = int f(x, y, z)
int add(int x, int y);
int multiply(int x, int y);

int main(void) {
    int num1 = 1;
    int num2 = 5;

    // y = f(x, y)
    // sum = add(num1, num2)
    int sum = add(num1, num2);
    printf("Sum = %d\n", sum);
    int mul = multiply(num1, num2);
    printf("Mul = %d\n", mul);

    return 0;
}

int add(int x, int y) {
    // do something
    return x + y;
}

int multiply(int x, int y) {
    return x * y;
}
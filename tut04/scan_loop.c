/**
 * Here, we look at how to keep scanning 1 value
 * until the user presser CTRL-D.
 */

#include <stdio.h>

int main(void) {
    printf("Enter some numbers: ");
    int value = -1;
    while (scanf("%d", &value) == 1) {
        printf("Scanned in %d\n", value);
    }
    return 0;
}
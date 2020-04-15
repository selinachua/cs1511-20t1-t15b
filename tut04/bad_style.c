/**
 * This file contains some code with bad styling.
 * Let's fix it to make it look nicer!
 * There are about 8-10 changes we could make.
 */

#include <stdio.h>

int main(void) {
    printf(  "What is your favourite fruit? ");

    int a;
scanf("%d", &a);

    if (a== 0)    {
        printf(      "You like apples!\n");
        } else if (a ==1) {
    printf("You like oranges!\n");
}
}

/* 
THIS IS THE GOOD STYLE VERSION

#define APPLE  0
#define ORANGE 1

int main(void) {
    printf("What is your favourite fruit? ");

    int fave_fruit = -1;
    scanf("%d", &fave_fruit);

    if (fave_fruit == APPLE) {
        printf("You like apples!\n");
    } else if (fave_fruit == ORANGE) {
        printf("You like oranges!\n");
    }

    return 0;
}
*/
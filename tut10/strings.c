/**
 * STACK -> variables
 * HEAP  -> malloced variables
 */

#include <stdio.h>

int main(void) {
    int int_array[3] = {1,2,3};
    char c = 'a'; // "a"
    // String -> an array of chars ending with \0 (null terminator).
    char char_array[9] = {'a', 'b', 'c', 'd', 'e', '\0', 'g', 'h', 'i'}; // "abcde"
    char *string = "abcde";

    printf("%s\n%s\n", char_array, string);

    char_array[0] = 'z';
    // printf("%s\n%s\n", char_array, string);
    // string[0] = 'z';
    // printf("%s\n%s\n", char_array, string);

    int i = 0;
    while (char_array[i] != '\0') {
        printf("%c\n", char_array[i]);
        i++;
    }

    return 0;
}

int f(int a) {
    int var = 10;
    return var;
}

#include <stdio.h>

int main(void) {
    // int -> 4 bytes -> 32 bits -> 32 1s and 0s
    // char -> 1 byte -> 8 bits  -> 8 1s and 0s

    char ch = 'a'; // 'a', 'b'
    char ch2 = 97;
    printf("%c\n", ch);
    printf("%c\n", ch2);

    printf("%d\n", ch);
    printf("%d\n", ch2);

    // Print only chars between b and e.
    char *string = "abcdefgz"; // "cdefghi"
    int shift = 2; // a -> c, b -> d
    // a -> c | 0 + 2 -> 2
    // b -> d | 1 + 2 -> 3
    // z -> b | 25 + 2 -> 27 % 26 -> 1
    // z - a = 25
    int i = 0;
    while (string[i] != '\0') {
        // printf("%d\n", string[i] + shift);
        char offset = string[i] - 'a'; // 'z' - 'a' = 25
        char shifted = offset + shift; // 25 + 2 = 27
        char wrapped = shifted % 26;   // 27 % 26 = 1
        char final = wrapped + 'a';    // 1 + 'a' = 'b'
        printf("%c", final);
        i++;
    }
    printf("\n");




    // char *string = "abcdefghi";
    // int i = 0;
    // while (string[i] != '\0') {
    //     // do something
    //     if (string[i] >= 'b' && string[i] <= 'e') {
    //         printf("%c\n", string[i]);
    //     }
    //     i++;
    // }


    return 0;
}
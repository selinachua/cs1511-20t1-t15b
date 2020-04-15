/**
 * This week we look at strings.
 * Things to remember:
 * - Strings are an array of chars that end in null
 *   terminator '\0'.
 * - Strings can be declared like a normal array or using
 *   char *s.
 * - Characters are just integers encoded using ASCII 
 *   encoding.
 */

#include <stdio.h>

int main(void) {
    char string1[10] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char *string2 = "hihihi";

    printf("string2: %s\n", string2);
    string2[0] = 'b';
    printf("string2: %s\n", string2);
    int i = 0;
    while (string2[i] != '\0') {
        // do something
        putchar(string2[i]);
        i++;
    }


    return 0;
}




// int main(void) {
//     int ch = getchar(); // ch = 'b' = 98
//     while (ch != EOF) {
        // if it is an alphabet then i want to print it out
        // if not, i'm not going to do anything
        // between a and z
        // a-z -> b-a
        // a + 1 -> b    1 + 1 -> 2
        // z + 1 -> a   (25 + 1) % 26 -> 0
//         if (ch >= 'a' && ch <= 'z') {
//             // ch = 'z' = 122
//             // 'z' - 'a' = 122 - 97 = 25
//             // 25 + 2 = 27 % 26 = 1
//             // 'a' + 1 -> 'b'
//             putchar('a' + (ch - 'a' + 1) % 26);
//             putchar('\n');
//         } else if (ch >= 'A' && ch <= 'Z') {
//             putchar(ch);
//             putchar('\n');
//         }
//         ch = getchar();
//     }

//     return 0;
// }
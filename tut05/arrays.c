/**
 * Let's learn about arrays!
 */

#include <stdio.h>

int main(void) {
    // Declare an array.
    int array[5] = {1, 2, 3, 4, 5};
    // Accessing an element in the array.
    int first_element = array[0];
    printf("First element: %d\n", first_element);
    // Replacing an element in the array.
    array[2] = 40;
    int third_element = array[2];
    printf("Third element: %d\n", third_element);
    // Printing the elements in the array.
    // 1 2 40 4 5
    int counter = 0;
    while (counter < 5) {
        printf("%d ", array[counter]);
        counter++;
    }
    printf("\n");
    // Printing the elements in a 2D array.
    // array:
    int array[3][3] = {{1, 2, 3}, {0, 1, 2}, {2, 3, 4}};
    // 1 2 3 0 1 2 2 3 4 
    // array[0][1]
    int counter1 = 0; 
    while(counter1 < 3) { 
        int counter2 = 0;
        while(counter2 < 3) {
            printf("%d ", array[counter1][counter2]);
            counter2++;
        }
        counter1++;
    }
    
    return 0;
}
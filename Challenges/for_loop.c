/*
Challenge: Count to 5

Test your understanding of C for loops by completing a small coding challenge.

Instructions
Inside main(), complete the following steps:
1. Declare int i (either before the loop or inside the for)
2. Use a for loop, and:
    - Set i = 1
    - Run the loop while i <= 5
    - Increase i using i++
    - Inside the loop, print i using the correct format specifier
*/

#include <stdio.h>

int main() {

    int i;

    // Write the for loop here
    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}

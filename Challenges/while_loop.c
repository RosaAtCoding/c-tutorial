/*
Challenge: Count from 1 to 5

Test your understanding of C while loops by completing a small coding challenge.

Instructions
Inside main(), complete the following steps:
1. Declare an int variable named i and set it to 1
2. Use a while loop to run as long as i is less than or equal to 5
3. Inside the loop, print the value of i using the correct format specifier
4. Increase i by 1 in each loop
*/

#include <stdio.h>

int main() {
    // 1) Write int i 
    int i = 1;

    // 2) Write while here
    while (i <= 5) {

        // 3) Print i inside the loop
        printf("%d\n", i);

        // 4) Increase i
        i++;
    }

    return 0;
}

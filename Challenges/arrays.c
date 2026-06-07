/*
Challenge: Create a Simple Array

Test your understanding of C arrays by completing a small coding challenge.

Instructions
Inside main(), complete the following steps:
1. Declare an int array named numbers with 5 elements
2. Set the first element (numbers[0]) to 10
3. Set the last element (numbers[4]) to 50
4. Print the first and last element using printf
*/

#include <stdio.h>

int main() {

    // 1) Declare an int array named numbers with 5 elements
    int numbers[5];

    // 2) Set numbers[0] to 10
    numbers[0] = 10;

    // 3) Set numbers[4] to 50
    numbers[4] = 50;

    // 4) Print numbers[0]
    printf("%d\n", numbers[0]);
    
    // 5) Print numbers[4]
    printf("%d\n", numbers[4]);

    return 0;
}

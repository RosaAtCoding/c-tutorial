/*
Challenge: Create a Student Report Card

Test your understanding of C data types by completing a small coding challenge.

Instructions
Inside main(), complete the following steps:
1. Declare an int named studentID and assign it a value
2. Declare a float named score and assign it a value (with decimals)
3. Declare a char named grade and assign it a single letter (in single quotes)
4. Print all three values using printf (use the correct format specifiers).
*/

#include <stdio.h>

int main() {
	// Write studentID here
	int studentID = 2575;

	// Write score here
	float score = 99.75;

	// Write grade here
	char grade = 'A';


	// Print studentID
	printf("Student ID: %d\n", studentID);

	// Print score
	printf("Score: %.2f\n", score);

	// Print grade
	printf("Grade: %c\n", grade);

	return 0;
}


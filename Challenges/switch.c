/*
Challenge: Fix Customer Order

Test your understanding of C switch by completing a small coding challenge.

Instructions
A customer wants to order Coffee.

The code in the editor is incomplete. Fix it by inserting the missing values so the program prints the correct order.
1. Change choice to the correct number for Coffee (see the comments).
2. Insert choice inside switch().
3. Replace each case: with the correct number based on the comments above.
4. Move printf("Invalid choice\n") into a default: case.

Code

#include <stdio.h>

int main() {
  int choice = 2;

  // 1 = Coffee
  // 2 = Tea

  switch () {
    case:
      printf("You ordered Coffee");
      break;

    case:
      printf("You ordered Tea");
      break;

      printf("Invalid choice");
  }

  return 0;
}
*/

#include <stdio.h>

int main() {
    int choice = 1;

    // 1 = Coffee
    // 2 = Tea

    switch (choice) {
        case 1:
            printf("You ordered Coffee");
            break;

        case 2:
            printf("You ordered Tea");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

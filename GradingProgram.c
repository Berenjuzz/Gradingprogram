#include <stdio.h>

int main() {
  int sum = 55; //imagine a grade

  if (sum >= 70 || sum >= 100) {
    // block of code to be executed if condition1 is true
    printf("Grade A");
  } else if (sum >= 60 || sum >= 69) {
    // block of code to be executed if the condition1 is false and condition2 is true
    printf("Grade B");
  } else if (sum >= 50 || sum >= 59) {
    // block of code to be executed if the condition2 is false and condition2 is true
    printf("Grade C");
  } else if (sum >= 40 || sum >= 49) {
    // block of code to be executed if the condition1 is false and condition2 is true
    printf("Grade D");
  } else {
    // block of code to be executed if all conditions return false false
    printf("Grade E");
  }
  return 0;
}

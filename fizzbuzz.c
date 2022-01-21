/*
Fizz Buzz is a classic developer interview question that is asked or referred to so often for so long, 
it is almost a cliché!

This program outputs numbers from 1 to 100. But for multiples of 3, print Fizz instead of the number 
and for the multiples of 5, print Buzz. For numbers which are multiples of both 3 and 5, print FizzBuzz.
*/

#include <stdio.h>
 
int main() {
  // Code here
  int i = 0;

  for (i = 1; i <= 100; i++) {
    if(i % 3 == 0 && i % 5 == 0) {
      printf("FizzBuzz\n");
    } else if (i % 3 == 0) {
      printf("Fizz\n");
    } else if (i % 5 == 0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
}

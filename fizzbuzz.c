#include <stdio.h>
#include <stdlib.h>

void fizzbuzz(int i) {
  int j;
  for (j = 1; j <= i; j++) {
    if (j % 15 == 0) {
      printf("FizzBuzz\n");
    } else if (j % 3 == 0) {
      printf("Fizz\n");
    } else if (j % 5 == 0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", j);
    }
  }
}

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("1 argument required, got %d\n", (argc-1));
    return 2;
  }

  int i = atoi(argv[1]);
  if (i < 0) {
    printf("%d is less than 0, exiting\n", i);
    return 2;
  }
  fizzbuzz(i);

  return 0;
}

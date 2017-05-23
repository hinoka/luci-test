#include <stdio.h>
#include <stdlib.h>

int line(int num, char* out) {
  if (num % 15 == 0) {
    sprintf(out, "FizzBuzz");
  } else if (num % 3 == 0) {
    sprintf(out, "Fizz");
  } else if (num % 5 == 0) {
    sprintf(out, "Buzz");
  } else {
    sprintf(out, "%d", num);
  }
}

void fizzbuzz(int i) {
  int j;
  char out[256];
  for (j = 1; j <= i; j++) {
    line(j, out);
    puts(out);
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

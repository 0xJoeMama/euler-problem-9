#include <inttypes.h>
#include <stdio.h>

#define UPPER 1000

int main(void) {
  for (int a = 1; a < UPPER / 2; a++) {
    // mathemagic
    int b = UPPER * (UPPER / 2 - a) / (UPPER - a);
    int c = UPPER - a - b;
    if (a * a + b * b == c * c) {
      printf("a: %d, b: %d, c: %d\n", a, b, c);
      printf("abc = %" PRId64 "\n", (int64_t)a * b * c);
      return 0;
    }
  }

  return -1;
}

#include <stdio.h>
int main(void) {
  for (int a = 1; a < 1000; a++) {
    // mathemagic
    int b = 1000 * (500 - a) / (1000 - a);
    int c = 1000 - a - b;
    if (a * a + b * b == c * c) {
      printf("a: %d, b: %d, c: %d\n", a, b, c);
      printf("abc = %d\n", a * b * c);
      return 0;
    }
  }

  return -1;
}

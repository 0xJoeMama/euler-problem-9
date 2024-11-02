#include <mmintrin.h>
#include <stdio.h>

int main(void) {
  for (int a = 1; a < 1000; a++) {
    // mathemagic
    int b = 1000 * (500 - a) / (1000 - a);
    int c = 1000 - a - b;

    // load a, b, c and 0 into v
    __m64 v = _mm_set_pi16(a, b, c, 0);

    // compute the sum of squares
    __m64 u = _m_pmaddwd(v, v);

    // u[0] and u[1] take the low and high 32 bits as an int32_t respectively
    if ((u[0] ^ u[1]) == 0) {
      printf("a: %d, b: %d, c: %d\n", a, b, c);
      printf("abc = %d\n", a * b * c);
      return 0;
    }
  }

  return -1;
}

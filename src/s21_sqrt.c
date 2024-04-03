#include "s21_math.h"

long double s21_sqrt(double x) {
  long double R = s21_fmax(x);
  long double M;

  if (x >= 0) {
    long double L = 0;
    M = (L + R) / 2;

    while ((M - L) > S21_EP) {
      if (M * M > x) {
        R = M;
      } else {
        L = M;
      }
      M = (L + R) / 2;
    }
  } else {
    M = S21_NAN;
  }
  return M;
}

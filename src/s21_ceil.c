#include "s21_math.h"

long double s21_ceil(double x) {
  long double ceil_x = (long long int)x;

  if (x != ceil_x && s21_fabs(x) > 0. && x > 0.) {
    ceil_x += 1;
  }

  return ceil_x;
}

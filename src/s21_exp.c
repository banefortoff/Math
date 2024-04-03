#include "s21_math.h"

long double s21_exp(double x) {
  long double add_value = 1;
  long double ryad = 1;
  long double i = 1;
  int flag = 0;
  if (x < 0) {
    x *= -1;
    flag = 1;
  }
  while (s21_fabs(add_value) > S21_EPS) {
    add_value *= x / i;
    i += 1;
    ryad += add_value;
    if (ryad > DBL_MAX) {
      ryad = S21_INF_POS;
      break;
    }
  }
  if (flag == 1) {
    if (ryad > DBL_MAX) {
      ryad = 0;
    } else {
      ryad = 1. / ryad;
    }
  }
  return ryad;
}

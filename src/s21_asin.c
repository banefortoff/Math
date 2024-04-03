#include "s21_math.h"

long double s21_asin(double x) {
  double sum_asin = 0;

  if (x < 1 && x > -1) {
    sum_asin = s21_atan(x / s21_sqrt(1 - x * x));
  } else if (x == 1) {
    sum_asin = S21_PI / 2;
  } else if (x == -1) {
    sum_asin = -S21_PI / 2;
  } else {
    sum_asin = S21_NAN;
  }

  return sum_asin;
}

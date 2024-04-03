#include "s21_math.h"

long double s21_acos(double x) {
  double sum_acos = 0;

  if (x > 0 && x < 1) {
    sum_acos = s21_atan(s21_sqrt(1 - x * x) / x);
  } else if (x < 0 && x > -1) {
    sum_acos = S21_PI + s21_atan(s21_sqrt(1 - x * x) / x);
  } else if (x == 1) {
    sum_acos = 0;
  } else if (x == -1) {
    sum_acos = S21_PI;
  } else if (x == 0) {
    sum_acos = S21_PI / 2;
  } else {
    sum_acos = S21_NAN;
  }

  return sum_acos;
}

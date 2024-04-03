#include "s21_math.h"

long double s21_cos(double x) {
  x = s21_fmod(x, 2 * S21_PI);
  long double sum_cos = 1, t = 1;

  for (int i = 2; s21_fabs(t) > S21_EPS; i += 2) {
    t *= -1 * x * x / ((i - 1) * i);
    sum_cos += t;
  }
  return sum_cos;
}

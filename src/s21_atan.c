#include "s21_math.h"

long double s21_atan(double x) {
  double sum = 0;
  double m = x;

  if (x < 0) {
    m = -m;
  }
  if (s21_fabs(x) > 1) {
    m = 1 / m;
  }
  double dividend = m;
  double divider = 1;
  double sign = 1;
  double tmp = m;

  while (s21_fabs(tmp) > S21_EPS && x != 1 && x != -1) {
    sum += tmp;
    sign *= -1;
    dividend *= m * m;
    divider += 2;
    tmp = sign * dividend / divider;
  }
  if (s21_fabs(x) > 1) sum = S21_PI / 2 - sum;
  if (x < 0) {
    sum = -sum;
  }
  if (x == -1) sum = -S21_PI / 4;
  if (x == 1) sum = S21_PI / 4;

  return sum;
}

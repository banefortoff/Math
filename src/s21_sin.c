#include "s21_math.h"

long double s21_sin(double x) {
  x = s21_fmod(x, 2 * S21_PI);
  long double sum_sin = x, t = x;

  for (int i = 1; !(t > -S21_EPS && t < S21_EPS); i++) {
    t = (-t) * (x * x) / ((2 * i + 1) * (2 * i));
    sum_sin += t;
  }
  return sum_sin;
}

#include "s21_math.h"

long double s21_tan(double x) {
  long double tan = 0;
  double sum_sin = s21_sin(x);
  double sum_cos = s21_cos(x);

  tan = sum_sin / sum_cos;

  return tan;
}

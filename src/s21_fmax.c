#include "s21_math.h"

long double s21_fmax(double x) {
  double max = 1;
  if (x > max) {
    max = x;
  }
  return max;
}

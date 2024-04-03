#include "s21_math.h"

long double s21_floor(double x) {
  long double floor_x = (long long int)x;

  if (x != floor_x && s21_fabs(x) > 0. && x < 0.) {
    floor_x -= 1;
  }

  return floor_x;
}

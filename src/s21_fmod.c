#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long long int mod = 0;
  mod = x / y;
  long double result = (long double)x - mod * (long double)y;
  return result;
}

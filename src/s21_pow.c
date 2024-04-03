#include "s21_math.h"

long double s21_pow(double x, double y) {
  double result;
  double copy = x;

  if (s21_check_pow(x, y) != 2) {
    result = s21_check_pow(x, y);
    if (s21_check_pow(x, y) == 3) {
      result = S21_NAN;
    }
    if (s21_check_pow(x, y) == 4) {
      result = S21_INF_POS;
    }
    if (s21_check_pow(x, y) == 5) {
      result = S21_INF_NEG;
    }
  } else {
    if (copy < 0) {
      copy = -copy;
      result = s21_exp(y * s21_log(copy));
      if (s21_fmod(y, 2) != 0) {
        result = -result;
      }
    } else {
      result = s21_exp(y * s21_log(copy));
    }
  }
  return result;
}

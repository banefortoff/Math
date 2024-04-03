#include "s21_math.h"

long double s21_log(double x) {
  int pow_exp = 0;
  double result = 0;
  double prev_res;
  double res = 0;

  if (x == 0) {
    res = S21_INF_NEG;
  } else if (x < 0) {
    res = S21_NAN;
  } else {
    for (; x >= S21_EXP; x /= S21_EXP, pow_exp++) {
    }
    for (int i = 0; i < 100; i++) {
      prev_res = result;
      result = prev_res + 2 * (x - s21_exp(prev_res)) / (x + s21_exp(prev_res));
    }
    res = result + pow_exp;
  }
  return res;
}

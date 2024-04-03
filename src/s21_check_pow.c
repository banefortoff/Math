#include "s21_math.h"

int s21_check_pow(double x, double y) {
  int result = 2;

  if (is_nan(x) && is_nan(y)) {
    result = 3;
  }
  if (x == 0 && y > 0 && y != S21_INF_POS && !is_nan(y)) {
    result = 0;
  }
  if (x == 0 && y < 0 && y != S21_INF_POS && !is_nan(y) && y != S21_INF_NEG) {
    result = 4;
  }
  if (x == 0 && is_nan(y)) {
    result = 3;
  }
  if (x == 0 && y == 0) {
    result = 1;
  }
  if (x == 0 && y == S21_INF_NEG) {
    result = 4;
  }
  if (x == -1 && y == S21_INF_POS) {
    result = 1;
  }
  if (x == -1 && y == S21_INF_NEG) {
    result = 1;
  }
  if (x == 1 && is_nan(y)) {
    result = 1;
  }
  if (x == 1 && y == S21_INF_POS) {
    result = 1;
  }
  if (x == 1 && y == 0) {
    result = 1;
  }
  if (x == 1 && y > 0 && y != S21_INF_POS && !is_nan(y) && y != S21_INF_NEG) {
    result = 1;
  }
  if (is_nan(x) && y == 0) {
    result = 1;
  }
  if (x == S21_INF_POS && y == 0) {
    result = 1;
  }
  if (x > 0 && x != S21_INF_POS && !is_nan(x) && x != S21_INF_NEG && y == 0) {
    result = 1;
  }
  if (s21_fabs(x) < 1 && x != 0 && y == S21_INF_POS) {
    result = 0;
  }
  if (s21_fabs(x) < 1 && x != 0 && y == S21_INF_NEG) {
    result = 4;
  }
  if (s21_fabs(x) > 1 && y == S21_INF_POS) {
    result = 4;
  }
  if (s21_fabs(x) > 1 && y == S21_INF_NEG) {
    result = 0;
  }
  if (x == S21_INF_POS && y == 0) {
    result = 1;
  }
  if (x == S21_INF_POS && y > 0 && y != S21_INF_POS && !is_nan(x) &&
      y != S21_INF_NEG) {
    result = 4;
  }
  if (x == S21_INF_POS && y == S21_INF_POS) {
    result = 4;
  }
  if (x == S21_INF_POS && is_nan(y)) {
    result = 3;
  }
  if (x == S21_INF_NEG && y == 0) {
    result = 1;
  }
  if (x == S21_INF_NEG && y > 0 && y != S21_INF_POS && !is_nan(y) &&
      y != S21_INF_NEG) {
    result = 5;
  }
  if (x == S21_INF_NEG && y == S21_INF_POS) {
    result = 4;
  }
  if (x == S21_INF_NEG && is_nan(y)) {
    result = 3;
  }

  return result;
}

#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#define S21_EXP 2.71828182845904523536028747135266250  // - e
#define S21_PI 3.14159265358979323846                  // PI
#define S21_EPS 1e-11
#define S21_EP 1e-9  // accuracy
#define S21_NAN 0.0 / 0.0
#define S21_INF_NEG -1.0 / 0.0
#define S21_INF_POS 1.0 / 0.0
#define DBL_MAX __DBL_MAX__
#define is_nan(x) ((x) != (x))

int s21_abs(int x);

long double s21_fabs(double x);

long double s21_sin(double x);

long double s21_cos(double x);

long double s21_tan(double x);

long double s21_asin(double x);

long double s21_acos(double x);

long double s21_atan(double x);

long double s21_sqrt(double x);

long double s21_fmax(double x);

long double s21_fmod(double x, double y);

long double s21_pow(double x, double y);

int s21_check_pow(double x, double y);

long double s21_exp(double x);

long double s21_log(double x);

long double s21_ceil(double x);

long double s21_floor(double x);

#endif  //  SRC_S21_MATH_H_

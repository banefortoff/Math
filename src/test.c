#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"

START_TEST(s21_sinus) {
  ck_assert_double_eq_tol(s21_sin(99), sin(99), 0.000001);
  ck_assert_double_eq_tol(s21_sin(-99), sin(-99), 0.000001);
  ck_assert_double_eq_tol(s21_sin(12.46), sin(12.46), 0.000001);
  ck_assert_double_eq_tol(s21_sin(0), sin(0), 0.000001);
  ck_assert_double_eq_tol(s21_sin(1), sin(1), 0.000001);
  ck_assert_double_eq_tol(s21_sin(S21_PI), sin(S21_PI), 0.000001);
  ck_assert_double_eq_tol(s21_sin(2 * S21_PI), sin(2 * S21_PI), 0.000001);
  ck_assert_double_eq_tol(s21_sin(0.777), sin(0.777), 0.000001);
  ck_assert_double_eq_tol(s21_sin(-34.23), sin(-34.23), 0.000001);
}
END_TEST

START_TEST(s21_cosinus) {
  ck_assert_double_eq_tol(s21_cos(123), cos(123), 0.000001);
  ck_assert_double_eq_tol(s21_cos(-123), cos(-123), 0.000001);
  ck_assert_double_eq_tol(s21_cos(5.67), cos(5.67), 0.000001);
  ck_assert_double_eq_tol(s21_cos(0), cos(0), 0.000001);
  ck_assert_double_eq_tol(s21_cos(1), cos(1), 0.000001);
  ck_assert_double_eq_tol(s21_cos(S21_PI), cos(S21_PI), 0.000001);
  ck_assert_double_eq_tol(s21_cos(2 * S21_PI), cos(2 * S21_PI), 0.000001);
  ck_assert_double_eq_tol(s21_cos(0.968), cos(0.968), 0.000001);
  ck_assert_double_eq_tol(s21_cos(-23.23), cos(-23.23), 0.000001);
}
END_TEST

START_TEST(s21_tangens) {
  ck_assert_double_eq_tol(s21_tan(14), tan(14), 0.000001);
  ck_assert_double_eq_tol(s21_tan(-165), tan(-165), 0.000001);
  ck_assert_double_eq_tol(s21_tan(3.42), tan(3.42), 0.000001);
  ck_assert_double_eq_tol(s21_tan(0), tan(0), 0.000001);
  ck_assert_double_eq_tol(s21_tan(1), tan(1), 0.000001);
  ck_assert_double_eq_tol(s21_tan(S21_PI), tan(S21_PI), 0.000001);
  ck_assert_double_eq_tol(s21_tan(2 * S21_PI), tan(2 * S21_PI), 0.000001);
  ck_assert_double_eq_tol(s21_tan(0.658), tan(0.658), 0.000001);
  ck_assert_double_eq_tol(s21_tan(-7.34), tan(-7.34), 0.000001);
}
END_TEST

START_TEST(s21_arcsin) {
  ck_assert_double_nan(s21_asin(14));
  ck_assert_double_nan(s21_asin(-165));
  ck_assert_double_nan(s21_asin(3.42));
  ck_assert_double_eq_tol(s21_asin(0), asin(0), 0.000001);
  ck_assert_double_eq_tol(s21_asin(1), asin(1), 0.000001);
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), 0.000001);
  ck_assert_double_eq_tol(s21_asin(0.99), asin(0.99), 0.000001);
  ck_assert_double_nan(s21_asin(S21_PI));
  ck_assert_double_eq_tol(s21_asin(-0.658), asin(-0.658), 0.000001);
}
END_TEST

START_TEST(s21_arccos) {
  ck_assert_double_nan(s21_acos(34));
  ck_assert_double_nan(s21_acos(-4325));
  ck_assert_double_nan(s21_acos(4.678));
  ck_assert_double_eq_tol(s21_acos(0), acos(0), 0.000001);
  ck_assert_double_eq_tol(s21_acos(1), acos(1), 0.000001);
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), 0.000001);
  ck_assert_double_eq_tol(s21_acos(0.99), acos(0.99), 0.000001);
  ck_assert_double_nan(s21_acos(S21_PI));
  ck_assert_double_eq_tol(s21_acos(-0.658), acos(-0.658), 0.000001);
}
END_TEST

START_TEST(s21_arctang) {
  ck_assert_double_eq_tol(s21_atan(4), atan(4), 0.000001);
  ck_assert_double_eq_tol(s21_atan(-43), atan(-43), 0.000001);
  ck_assert_double_eq_tol(s21_atan(3.68), atan(3.68), 0.000001);
  ck_assert_double_eq_tol(s21_atan(0), atan(0), 0.000001);
  ck_assert_double_eq_tol(s21_atan(1), atan(1), 0.000001);
  ck_assert_double_eq_tol(s21_atan(-1), atan(-1), 0.000001);
  ck_assert_double_eq_tol(s21_atan(1.234), atan(1.234), 0.000001);
  ck_assert_double_eq_tol(s21_atan(S21_PI), atan(S21_PI), 0.000001);
  ck_assert_double_eq_tol(s21_atan(S21_PI / 4), atan(S21_PI / 4), 0.000001);
  ck_assert_double_eq_tol(s21_atan(-0.078), atan(-0.078), 0.000001);
}
END_TEST

START_TEST(s21_abs_test) {
  ck_assert_int_eq(s21_abs(99), abs(99));
  ck_assert_int_eq(s21_abs(0), abs(0));
  ck_assert_int_eq(s21_abs(345678), abs(345678));
  ck_assert_int_eq(s21_abs(-33565754), abs(-33565754));
  ck_assert_int_eq(s21_abs(1), abs(1));
  ck_assert_int_eq(s21_abs(-334564), abs(-334564));
}
END_TEST

START_TEST(s21_fabs_test) {
  ck_assert_double_eq_tol(s21_fabs(34.234), fabs(34.234), 0.000001);
  ck_assert_double_eq_tol(s21_fabs(-34.234), fabs(-34.234), 0.000001);
  ck_assert_double_eq_tol(s21_fabs(0.0), fabs(0.0), 0.000001);
  ck_assert_double_eq_tol(s21_fabs(1.0), fabs(1.0), 0.000001);
  ck_assert_double_eq_tol(s21_fabs(-365434.233456784), fabs(-365434.233456784),
                          0.000001);
  ck_assert_double_eq_tol(s21_fabs(5634567.34567), fabs(5634567.34567),
                          0.000001);
  ck_assert_double_eq_tol(s21_fabs(0.34567), fabs(0.34567), 0.000001);
  ck_assert_double_eq_tol(s21_fabs(-0.34567), fabs(-0.34567), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test) {
  ck_assert_double_eq_tol(s21_ceil(34.234), ceil(34.234), 0.000001);
  ck_assert_double_eq_tol(s21_ceil(0.0), ceil(0.0), 0.000001);
  ck_assert_double_eq_tol(s21_ceil(-45.23456), ceil(-45.23456), 0.000001);
  ck_assert_double_eq_tol(s21_ceil(5432345.223456), ceil(5432345.223456),
                          0.000001);
  ck_assert_double_eq_tol(s21_ceil(0.65432), ceil(0.65432), 0.000001);
  ck_assert_double_eq_tol(s21_ceil(3456789.3456789), ceil(3456789.3456789),
                          0.000001);
  ck_assert_double_eq_tol(s21_ceil(34567890.0), ceil(34567890.0), 0.000001);
  ck_assert_double_eq_tol(s21_ceil(1), ceil(1), 0.000001);
  ck_assert_double_eq_tol(s21_ceil(-1), ceil(-1), 0.000001);
}
END_TEST

START_TEST(s21_floor_test) {
  ck_assert_double_eq_tol(s21_floor(34.234), floor(34.234), 0.000001);
  ck_assert_double_eq_tol(s21_floor(0.0), floor(0.0), 0.000001);
  ck_assert_double_eq_tol(s21_floor(-45.23456), floor(-45.23456), 0.000001);
  ck_assert_double_eq_tol(s21_floor(5432345.223456), floor(5432345.223456),
                          0.000001);
  ck_assert_double_eq_tol(s21_floor(0.65432), floor(0.65432), 0.000001);
  ck_assert_double_eq_tol(s21_floor(3456789.3456789), floor(3456789.3456789),
                          0.000001);
  ck_assert_double_eq_tol(s21_floor(34567890.0), floor(34567890.0), 0.000001);
  ck_assert_double_eq_tol(s21_floor(1), floor(1), 0.000001);
  ck_assert_double_eq_tol(s21_floor(-1), floor(-1), 0.000001);
}
END_TEST

START_TEST(s21_exp_test) {
  ck_assert_double_eq_tol(s21_exp(0), exp(0), 0.000001);
  ck_assert_double_eq_tol(s21_exp(34.234), exp(34.234), 0.000001);
  ck_assert_double_eq_tol(s21_exp(-30.245678934), exp(-30.245678934), 0.000001);
  ck_assert_double_eq_tol(s21_exp(1), exp(1), 0.000001);
  ck_assert_double_eq_tol(s21_exp(-1), exp(-1), 0.000001);
  ck_assert_double_eq_tol(s21_exp(3), exp(3), 0.000001);
  ck_assert_double_eq_tol(s21_exp(30.245678934), exp(30.245678934), 0.000001);
  ck_assert_double_eq_tol(s21_exp(23), exp(23), 0.000001);
  ck_assert_double_infinite(s21_exp(1.79769e+308));
  ck_assert_double_eq_tol(s21_exp(-3), exp(-3), 0.000001);
  ck_assert_double_eq_tol(s21_exp(DBL_MIN), exp(DBL_MIN), 0.000001);
  ck_assert_double_eq_tol(s21_exp(-DBL_MAX), exp(-DBL_MAX), 0.000001);
}
END_TEST

START_TEST(s21_log_test) {
  ck_assert_double_infinite(s21_log(0));
  ck_assert_double_eq_tol(s21_log(1), log(1), 0.000001);
  ck_assert_double_eq_tol(s21_log(4.56), log(4.56), 0.000001);
  ck_assert_double_nan(s21_log(-4.56));
  ck_assert_double_eq_tol(s21_log(3456), log(3456), 0.000001);
  ck_assert_double_eq_tol(s21_log(56789.34567), log(56789.34567), 0.000001);
  ck_assert_double_nan(s21_log(-3456.7845678));
}
END_TEST

START_TEST(s21_sqrt_negative) {
  ck_assert_double_eq_tol(s21_sqrt(99), sqrt(99), 0.000001);
  ck_assert_double_eq_tol(s21_sqrt(893748103487296226.7575),
                          sqrt(893748103487296226.7575), 0.000001);
  ck_assert_double_nan(s21_sqrt(-99));
  ck_assert_double_eq_tol(s21_sqrt(12.46), sqrt(12.46), 0.000001);
  ck_assert_double_eq_tol(s21_sqrt(0), sqrt(0), 0.000001);
  ck_assert_double_eq_tol(s21_sqrt(1), sqrt(1), 0.000001);
  ck_assert_double_eq_tol(s21_sqrt(16), sqrt(16), 0.000001);
  ck_assert_double_eq_tol(s21_sqrt(87235), sqrt(87235), 0.000001);
  ck_assert_double_eq_tol(s21_sqrt(0.777), sqrt(0.777), 0.000001);
}
END_TEST

START_TEST(s21_fmod_neutral) {
  ck_assert_double_eq_tol(s21_fmod(99, 103.65), fmod(99, 103.65), 0.000001);
  ck_assert_double_eq_tol(s21_fmod(-99, -103.65), fmod(-99, -103.65), 0.000001);
  ck_assert_double_eq_tol(s21_fmod(12.46, 17.79), fmod(12.46, 17.79), 0.000001);
  ck_assert_double_eq_tol(s21_fmod(0, 0.324), fmod(0, 0.324), 0.000001);
  ck_assert_double_eq_tol(s21_fmod(16, 17), fmod(16, 17), 0.000001);
  ck_assert_double_eq_tol(s21_fmod(87235.76292, 86234.97413),
                          fmod(87235.76292, 86234.97413), 0.000001);
  ck_assert_double_eq_tol(s21_fmod(0.777, 0.888), fmod(0.777, 0.888), 0.000001);
}
END_TEST

START_TEST(s21_pow_neutral) {
  ck_assert_double_nan(s21_pow(S21_NAN, S21_NAN));
  ck_assert_double_eq_tol(s21_pow(0, 4), pow(0, 4), 0.000001);
  ck_assert_double_infinite(s21_pow(0, -4));
  ck_assert_double_nan(s21_pow(0, S21_NAN));
  ck_assert_double_nan(s21_pow(0, -S21_NAN));
  ck_assert_double_eq_tol(s21_pow(0, 0), pow(0, 0), 0.000001);
  ck_assert_double_infinite(s21_pow(0, S21_INF_NEG));
  ck_assert_double_eq_tol(s21_pow(-1, S21_INF_POS), pow(-1, S21_INF_POS),
                          0.000001);
  ck_assert_double_eq_tol(s21_pow(-1, S21_INF_NEG), pow(-1, S21_INF_NEG),
                          0.000001);
  ck_assert_double_eq_tol(s21_pow(1, S21_NAN), pow(1, S21_NAN), 0.000001);
  ck_assert_double_eq_tol(s21_pow(1, S21_INF_POS), pow(1, S21_INF_POS),
                          0.000001);
  ck_assert_double_eq_tol(s21_pow(1, 0), pow(1, 0), 0.000001);
  ck_assert_double_eq_tol(s21_pow(1, 11), pow(1, 11), 0.000001);
  ck_assert_double_eq_tol(s21_pow(S21_NAN, 0), pow(S21_NAN, 0), 0.000001);
  ck_assert_double_eq_tol(s21_pow(S21_INF_POS, 0), pow(S21_INF_POS, 0),
                          0.000001);
  ck_assert_double_eq_tol(s21_pow(11, 0), pow(11, 0), 0.000001);
  ck_assert_double_eq_tol(s21_pow(0.666, S21_INF_POS), pow(0.666, S21_INF_POS),
                          0.000001);
  ck_assert_ldouble_infinite(s21_pow(0.666, S21_INF_NEG));
  ck_assert_ldouble_infinite(s21_pow(1.666, S21_INF_POS));
  ck_assert_double_eq_tol(s21_pow(1.666, S21_INF_NEG), pow(1.666, S21_INF_NEG),
                          0.000001);
  ck_assert_ldouble_infinite(s21_pow(S21_INF_POS, 11));
  ck_assert_ldouble_infinite(s21_pow(S21_INF_POS, S21_INF_POS));
  ck_assert_double_nan(s21_pow(S21_INF_POS, S21_NAN));
  ck_assert_double_eq_tol(s21_pow(S21_INF_NEG, 0), pow(S21_INF_NEG, 0),
                          0.000001);
  ck_assert_ldouble_infinite(s21_pow(S21_INF_NEG, 11));
  ck_assert_double_infinite(s21_pow(S21_INF_NEG, S21_INF_POS));
  ck_assert_double_nan(s21_pow(S21_INF_NEG, S21_NAN));
  ck_assert_double_eq_tol(s21_pow(3.372, 3.372), pow(3.372, 3.372), 0.000001);
  ck_assert_double_eq_tol(s21_pow(3.372, -3.372), pow(3.372, -3.372), 0.000001);
  ck_assert_double_eq_tol(s21_pow(7.372, 0), pow(7.372, 0), 0.000001);
  ck_assert_double_eq_tol(s21_pow(0, 7.372), pow(0, 7.372), 0.000001);
  ck_assert_double_eq_tol(s21_pow(4, 9.475), pow(4, 9.475), 0.000001);
  ck_assert_double_eq_tol(s21_pow(-2, 2), pow(-2, 2), 0.000001);
  ck_assert_double_eq_tol(s21_pow(-2, 3), pow(-2, 3), 0.000001);
  ck_assert_double_eq_tol(s21_pow(DBL_MIN, DBL_MIN), pow(DBL_MIN, DBL_MIN),
                          0.000001);
  ck_assert_double_infinite(s21_pow(-DBL_MAX, DBL_MAX));
}
END_TEST

Suite *s21_test_suite() {
  Suite *s = suite_create("Library tests");
  TCase *s21_math = tcase_create("sin");

  tcase_add_test(s21_math, s21_sinus);
  tcase_add_test(s21_math, s21_cosinus);
  tcase_add_test(s21_math, s21_tangens);
  tcase_add_test(s21_math, s21_arcsin);
  tcase_add_test(s21_math, s21_arccos);
  tcase_add_test(s21_math, s21_arctang);

  tcase_add_test(s21_math, s21_abs_test);
  tcase_add_test(s21_math, s21_fabs_test);
  tcase_add_test(s21_math, s21_ceil_test);
  tcase_add_test(s21_math, s21_floor_test);
  tcase_add_test(s21_math, s21_exp_test);
  tcase_add_test(s21_math, s21_log_test);

  tcase_add_test(s21_math, s21_sqrt_negative);
  tcase_add_test(s21_math, s21_fmod_neutral);
  tcase_add_test(s21_math, s21_pow_neutral);

  suite_add_tcase(s, s21_math);

  return s;
}

int main() {
  int no_failed = 0;
  Suite *s = s21_test_suite();
  SRunner *runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

// gcc -Wall -Werror -Wextra test.c s21_abs.c s21_cos.c s21_fabs.c
// s21_factorial.c s21_sin.c s21_tan.c -o test -lcheck --coverage

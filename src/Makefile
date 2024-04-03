GCC = gcc -Wall -Werror -Wextra -std=c11 
NAME = s21_abs.c s21_fabs.c s21_sin.c s21_cos.c s21_tan.c s21_asin.c s21_acos.c s21_atan.c s21_sqrt.c s21_fmax.c s21_fmod.c s21_pow.c s21_check_pow.c s21_exp.c s21_log.c s21_ceil.c s21_floor.c
NAME_O = s21_abs.o s21_fabs.o s21_sin.o s21_cos.o s21_tan.o s21_asin.o s21_acos.o s21_atan.o s21_sqrt.o s21_fmax.o s21_fmod.o s21_pow.o s21_check_pow.o s21_exp.o s21_log.o s21_ceil.o s21_floor.o
LIB = s21_math.a

all: s21_math.a lib_test

s21_math.a:
	$(GCC) -c $(NAME)
	ar rc $(LIB) $(NAME_O)
	ranlib $(LIB)
	rm -rf *.o

test:
	$(GCC) test.c $(NAME) -o test -lcheck -lm --coverage
	./test
	rm -rf *.gcda 

lib_test:
	$(GCC) test.c $(LIB) -o lib_test -lcheck -lm --coverage
	./lib_test
	rm -rf *.gcda *.gcno

gcov_report: clean test
	$(GCC) test.c $(NAME) -o test -lcheck -lm --coverage
	./test
	lcov -t "gcov" -o gcov.info -c -d .  
	genhtml -o report gcov.info

lint:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c *.h
	python3 ../materials/linters/cpplint.py --extensions=c *.c
	clang-format -n *.c *.h

g_clean:
	rm -rf gcov.info
	rm -rf report

clean:
	rm -rf *.o *.a
	rm -rf *.gcda *.gcno
	make g_clean
	rm -rf *test

reduild: clean all
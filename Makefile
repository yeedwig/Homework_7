sum_calc_makefile : sum.o sum_calc.o
	gcc -o sum_calc_makefile sum.o sum_calc.o

sum.o : sum.c
	gcc -c -o sum.o sum.c

sum_calc.o: sum_calc.c
	gcc -c -o sum_calc.o sum_calc.c


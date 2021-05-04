#include <stdio.h>
#include "sum.h"
#include <stdlib.h>

int main(int argc, char **argv){

	int a;
	int b;
	int value;
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	value = sum(a , b);
	printf("%d + %d = %d\n",a ,b , value);
	
	
	return 0;


}


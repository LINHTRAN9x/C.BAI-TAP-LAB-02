#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long int longintType;
	long double longdoubleType;
	
	
	
	printf("/*======= Kich thuoc cua ca kieu du lieu=======*/\n");
	printf("\n       Kieu int: %zu byte\n",sizeof(intType));
	  printf("       So nguyen: 15\n");
	printf("\n       Kieu float: %zu byte\n",sizeof(floatType));
	  printf("       So thuc kieu float: 3.456000\n");
	printf("\n       Kieu double: %zu byte\n",sizeof(doubleType));
	  printf("       So thuc kieu double: 3.4567891235\n");
	printf("\n       Kieu char: %zu byte\n",sizeof(charType));
	  printf("       Ky tu: E\n");
	printf("\n       Kieu long int: %zu byte\n",sizeof(longintType));
	printf("\n       Kieu long double: %zu\n",sizeof(longdoubleType));
	
	printf("\n/*=============================================*/\n");
	return 0;
}
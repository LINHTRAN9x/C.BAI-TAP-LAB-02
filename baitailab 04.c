#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float C,F;
	printf("Enter 'C here: ");
	scanf("%f",&C);
	
    F=(C* 9/5)+32;
	
	printf("F quy doi la= %.1f",F);
	
	return 0;
}
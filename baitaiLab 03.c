#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2 ;
	printf("Enter num1 ");
	scanf("%d",&num1);
	
	printf("Enter num2 ");
	scanf("%d",&num2);
	
	
	int Tong=num1 + num2;
	int Hieu=num1 - num2;
	int Tich=num1 * num2;
	float Thuong= num1/num2;
	
	printf("Tong= %d\n",Tong);
		printf("Hieu= %d\n",Hieu);
			printf("Tich= %d\n",Tich);
				printf("Thuong= %.2f",Thuong);
	return 0;
}
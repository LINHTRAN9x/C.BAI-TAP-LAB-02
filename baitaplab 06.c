#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float toan,ly,hoa;
	printf("Nhap diem Toan: ");
	scanf("%f",&toan);
	printf("Nhap diem Ly: ");
	scanf("%f",&ly);
	printf("Nhap diem Hoa: ");
	scanf("%f",&hoa);
	
	float tong=toan+ly+hoa;
	float tb=tong/3;
	printf("Tong diem la %.1f\n",tong);
	printf("Diem TB la %.1f",tb);
	return 0;
}
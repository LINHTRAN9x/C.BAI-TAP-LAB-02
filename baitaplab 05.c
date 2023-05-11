#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float top,bottom,height,dientich;
	printf("enter Top here: ");
	scanf("%f",&top);
	printf("enter Bottom here: ");
	scanf("%f",&bottom);
	printf("enter height here: ");
	scanf("%f",&height);
	
	dientich=(top*bottom)*height/2;
	printf("Dien tich= %.1f",dientich);
	
	return 0;
}
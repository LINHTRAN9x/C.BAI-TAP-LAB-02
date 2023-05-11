#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main(){
	float chuvitron,dientichtron,chuvivuong,dientichvuong,chuvichunhat,dientichchunhat;
	float r,a,c,d;
	printf("Nhap vao r ");
	scanf("%f",&r);
	printf("Nhap vao a ");
	scanf("%f",&a);
	printf("Nhap vao c ");
	scanf("%f",&c);
	printf("Nhap vao d ");
	scanf("%f",&d);
	
     chuvitron=PI*r*2;
	 dientichtron=PI*r*r;
	 printf("Chu vi hinh tron la : %.1f\n",chuvitron);
	 printf("dien tich hinh tron la : %.1f\n",dientichtron);
	 
	 chuvivuong=a*4;
	 dientichvuong= a*a;
	 printf("Chu vi hinh vuong la : %.1f\n",chuvivuong);
	 printf("dien tich hinh vuong la : %.1f\n",dientichvuong);
	 
	 chuvichunhat=(c+d)*2;
	 dientichchunhat=c*d ;
	 printf("Chu vi hinh chu nhat la : %.1f\n",chuvichunhat);
	 printf("dien tich hinh chu nhat la : %.1f\n",dientichchunhat); 
	 
	
}
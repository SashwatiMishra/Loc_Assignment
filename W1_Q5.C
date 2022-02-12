/*FIND AREA ,CIRCUMFERENCE & DIAMETER OF A CIRCLE*/
#include<stdio.h>
#include<conio.h>
#define pi=3.14
int main()
{
	float r,d,cf,area;
	clrscr();
	printf("ENTER THE RADIUS OF THE CIRCLE=/n ");
	scanf("%f",&r);
	d=2*r;
	cf=2*pi*r;
	area=pi*r*r;
	printf("DIAMETER OF CIRCLE=%f\n",d)
	printf("CIRCUMFERENCE OF CIRCLE=%f\n",cf);
	printf("AREA OF CIRCLE=%f\n",area);
	return 0;
}
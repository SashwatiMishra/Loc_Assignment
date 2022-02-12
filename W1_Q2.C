/*GREATER OF TWO NUMBERS*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	clrscr();
	printf("ENTER THE NUMBERS A&B=\n ");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is greater\n",a);
	}
	else if(b>a)
	{
		printf("%d is greater\n",b);
	}
	else
	{
		printf("EQUAL");
	}
	return 0;
}

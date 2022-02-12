/*FIND ODD AND EVEN*/
#include<stdio.h>
#include<stdio.h>
int main()
{
	int a,num;
	clrscr();
	printf("ENTER THE NUMBER A=\n");
	scanf("%d",&a);
	num=a%2;
	switch(num)
	{
		case 0:
		{
			printf("num entered is even\n");
			break;
		}
		case 1:
		{
			printf("num enteredis odd\n");
			break;
		}
		default:
		{
			printf("WRONG INPUT");
			break;
		}
       }
	return 0;
}


/*PERFORM ALL ARITHIMATIC OPEATIONS*/
#include<stdio.h>
#include<stdio.h>
int main()
{
	int a,b,n,s,diff,m,d,mod;
	clrscr();
	printf("ENTER THE NUMBER A=\n");
	scanf("%d",&a);
	printf("ENTER THE NUMBER B=\n");
	scanf("%d",&b);
	printf("ENTER YOUR CHOICE N=\n");
	scanf("%d",&n);
	s=a+b;
	diff=a-b;
	m=a*b;
	d=a/b;
	mod=a%b;
	switch(n)
	{
		case 0:
		{
			printf("SUM=%d\n",s);
			break;
		}
		case 1:
		{
			printf("DIFFERNCE=%d\n",diff);
			break;
		}
		case 2:
		{
			printf("MLTPLICATION=%d\n",m);
			break;
		}
		case 3:
		{
			printf("DIVISION=%d\n",d);
			break;
		} case 4:
		{
			printf("MODULUS=%d\n",mod);
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


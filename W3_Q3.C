/*C program to check whether a number is even or odd
using functions*/
#include <stdio.h>
#include <conio.h>
int find_Num(int);
int main()
{
    int num;
    clrscr();
    printf("Enter a number to check odd or even\n");
    scanf("%d",&num);
    find_Num(num);
    return 0;
}
int find_Num(int num)
{
 if(num%2==0)
 {
    printf("\n%d is an even number",num);
 }
 else
 {
    printf("\n%d is an odd number",num);
 }

}

/*A program in C to swap two numbers using function*/
#include <stdio.h>
#include <conio.h>
void swap(int x, int y);
int main()
{
    int a, b;
    clrscr();
    printf("Enter values for a and b\n");
    scanf("%d %d", &a, &b);
    printf("Before swapping: %d %d\n", a, b);
    swap(a, b);
    printf("After swapping: %d %d\n", a, b);
    return 0;
}

void swap(int x, int y)
{
    x = x+y;
    y = x-y;
    x = x-y;
    printf("Swapped numbers: %d %d\n", x, y);
}

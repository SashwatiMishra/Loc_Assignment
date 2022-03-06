//To print swaping of first and last digit of an integer//
#include <stdio.h>
#include <math.h>
int main()
{
  int num, last, first, temp, swap, count = 0;
  printf("Enter any number:\n");
  scanf("%d", &num);
  temp = num;
  while(temp>=10)
    {
        last = temp % 10;
        temp =  temp/10;
    }
  first = temp;
  swap = (last * pow(10, count) + first) + (num - (first * pow(10, count) + last));
  printf("Last Digit: %d\n", last);
  printf("First Digit: %d\n", first);
  printf("%d is swapped to %d\n", num, swap);
  return 0;
}

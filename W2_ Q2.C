//find the sum of even & odd number of 10 numbers//
#include <stdio.h> 
int main() 
{ 
	int n[10] ,i, odd=0, even=0; 
	for( i=0; i<10; i++ ) 
         { 
		printf( "Enter number :\n"); 
		scanf( "%d", &n[i] ); 
		if( n[i]%2 == 0 ) 
		     even = even + n[i]; 
		else 
		     odd = odd + n[i]; 
	}  
	printf( "Sum of all odd numbers is : %d\n", odd ); 
	printf( "Sum of all even numbers is : %d\n", even ); 
	return 0; 
}

//find the sum & multiplication of two matrices of order 2*2//
#include <stdio.h> 
int main() 
{ 
  float a[2][2], b[2][2], result[2][2], mul[2][2]; 
  int i,j,k;
  printf("Enter elements of 1st matrix\n"); 
  for(i = 0; i < 2; ++i) 
    for(j = 0; j < 2; ++j) 
    { 
      printf("Enter a%d%d: ", i + 1, j + 1); 
      scanf("%f", &a[i][j]); 
    }
  printf("Enter elements of 2nd matrix\n"); 
  for(i = 0; i < 2; ++i) 
    for(j = 0; j < 2; ++j) 
     { 
      printf("Enter b%d%d: ", i + 1, j + 1); 
      scanf("%f", &b[i][j]); 
     } 
  for(i = 0; i < 2; ++i) 
    for(j = 0; j < 2; ++j) 
    { 
      result[i][j] = a[i][j] + b[i][j]; 
    } 
  printf("Sum Of Matrix:\n"); 
  for(i = 0; i < 2; ++i) 
   {
     for(j = 0; j < 2; ++j) 
     { 
      printf("%f\t", result[i][j]);
     } 
        printf("\n"); 
    }     
  for(i=0;i<2;++i)        
    for(j=0;j<2;++j)    
     {    
       for(k=0;k<2;++k)    
        {    
          mul[i][j]=a[i][k]*b[k][j];    
        }    
       }
  printf("multiplication of the matrix=\n");    
  for(i=0;i<2;i++)    
   {    
     for(j=0;j<2;j++)    
      {    
        printf("%d\t",mul[i][j]);    
      }    
       printf("\n");    
    }    
return 0;  
}
  

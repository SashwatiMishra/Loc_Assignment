//To concatenate strings and print it reverse order//
#include<stdio.h>
#include <string.h>
int main()
{
    char s1[100],s2[100];  
    int i,j,k,temp;
 
    printf("Enter  string1: ");
    scanf("%s",&s1);
    printf("Enter  string2: ");
    scanf("%s",&s2);
    j=strlen(s1);
    
    for(i=0;s2[i]!='\0';i++)  
    {
    	s1[i+j]=s2[i];
     }
    s1[i+j]='\0';
 
    printf("combined two strings ='%s'\n",s1);
    k=i + j;
    for (k = 0; k<len/2; k++)  
    {   
        temp = s1[k];  
        s1[k] = s1[len - k - 1];  
        s1[len - k - 1] = temp;  
    } 
    printf("reverse string= %s\n",s1);
    return 0;
}

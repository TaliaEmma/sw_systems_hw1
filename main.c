#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "NumClass.h"
#include <string.h>

int main() {

	int x1,x2;
	
	printf("Enter Number_1\n");
	scanf("%d" ,&x1);
	printf("Enter Number_2\n");
	scanf("%d" ,&x2);
	
	printf("\nThe Armstrong numbers are: ");
	for(int i=x1; i<=x2; i++)
	{
		if(isArmstrong(i)) 
		{
			printf("%d " ,i);
		}
	}
	printf("\n");
	
	printf("The Palindromes are: ");
	for(int i=x1; i<=x2; i++)
	{
		if(isPalindrome(i)) 
		{
			printf("%d " ,i);
		}
	}
	printf("\n");
	
	printf("The Prime numbers are: ");
	for(int i=x1; i<=x2; i++)
	{
		if(isPrime(i)) 
		{	
			printf("%d " ,i);
		}
	}
	printf("\n");

	printf("The Strong numbers are: ");
	for(int i=x1; i<=x2; i++)
	{
		if(isStrong(i))
		{
			printf("%d " ,i);
		}
	}
	printf("\n");
	

	return 0;
}

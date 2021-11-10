#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "NumClass.h"
#include <string.h>

int isPrime(int num)
{
	int s = sqrt(num)+1;
	
	if(num == 1 || num == 2)
	{
		return 1;
	}
	
	for(int i=2; i<s; i++)
	{
		
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int isStrong(int num)
{
	int sum=0, f=1, newNum=num;
	while(newNum)
	{
		for(int i=1; i<=newNum%10; i++)
		{
			
			f=f*i;
		}
		sum+=f;
		f=1;
		newNum=newNum/10;	
	}
	if(sum != num)
	{
		return 0;
	}
	
	return 1;
}




#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "NumClass.h"
#include <string.h>


int isArmstrong(int num)
{
	int newNum=num, x=0, sum=0;
	while(newNum)
	{
		newNum=newNum/10;
		x++;
	}
	
	newNum=num;
	
	for(int i=0; i<x; i++)
	{
		sum+=pow(newNum%10,x);
		newNum=newNum/10;
	}
	if(sum != num)
	{
		return 0;
	}
	
	return 1;
	
}
int isPalindrome(int num)
{

	int newNum = num, sum=0, m=0;
	while(newNum)
	{
		m=newNum%10;
		sum=(sum*10)+m;
		newNum=newNum/10;
	}	
	
	if(sum != num)
	{
		return 0;
	}
	
	return 1;	
}



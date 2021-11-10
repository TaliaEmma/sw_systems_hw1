#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "NumClass.h"
#include <string.h>

int s;


int isArmstrongTemp(int num, int times)
{
	static int rem=0;
	if(num>0)
	{
		rem = num%10;
		s = s + pow(rem,times); 
		isArmstrongTemp(num/10, times);
		return s;
	}
	else
	{
		return 0;
	}
}
int isArmstrong(int num)
{
	
	int t = num, p=0;
	s=0;
	while(t)
	{
		t=t/10;
		p++;
	}
	
	if(isArmstrongTemp(num, p) == num)
	{
		return 1;
	}
	return 0;
	
}
int rev(int num)
{

	if(num == 0)
	{
		return 0;
	}
	
	int d = (int)log10(num);
	return ((num%10 * pow(10,d)) + rev(num/10));

}

int isPalindrome(int num)
{
	
	if(num == rev(num))
	{
		return 1;
	}	
	
	return 0;
}




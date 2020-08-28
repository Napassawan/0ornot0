#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a;
int main()
{
	printf("Enter the number : ");
	scanf("%d", &a);
	if (a > 0)
	{
		printf("more than zero!");
	}
	else
	{
		printf("less or equal zero!");
	}
	return 0;
}
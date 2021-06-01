#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define _CRT_SERCURE_NO_WARNINGS


double exp(double n)

  {
	if (n <= 1)
	{
		return (1);

	}

	
	else
	{
		return ((1/n)+exp(n-1));
	}
}

int main(void)
{
	int n = 0;

	printf("n번째 자리 : ");
	scanf_s("%d", &n);

	printf("%f", exp(n));

	return 0;
}
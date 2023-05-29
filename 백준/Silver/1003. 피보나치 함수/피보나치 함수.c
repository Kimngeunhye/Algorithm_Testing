#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void fibo(int N)
{
	long long a = 0, b = 1, c;
	if (N == 0)
		printf("1 0\n");
	else if (N == 1)
	{
		printf("0 1\n");
	}
	else
	{
		for (int i = 1; i < N; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%lld %lld\n", a, b);
	}
}
int main()
{
	int N, M;
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d\n", &M);
		fibo(M);
	}
}
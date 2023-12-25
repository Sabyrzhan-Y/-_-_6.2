#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);
	float r = ((x/1000) + ((x % 1000) / 100) + ((x % 100) / 10) + (x % 10)) / 4.f;
	printf("%.2f\n", r);
	return 0;
}

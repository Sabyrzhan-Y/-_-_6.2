#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum;
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	printf("%d + %d + %d = %d\n", a, b, c, sum);
	return 0;
}
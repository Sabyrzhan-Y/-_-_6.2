#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum, S;
	scanf("%d%d%d", &a, &b, &c);
	sum = a + b + c;
	S = a * b * c;
    
	printf("%d + %d + %d = %d\n", a, b, c, sum);
	printf("%d * %d * %d = %d\n", a, b, c, S);
	return 0;
}

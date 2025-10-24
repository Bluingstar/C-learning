#include<stdio.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);

	int b = 0;
	b = (a-a % 10000)/10000;
	a = a - b * 10000;

	int c = 0;
	c = (a - a % 1000) / 1000;
	a = a - c * 1000;

	int d = 0;
	d = (a - a % 100) / 100;
	a = a - d * 100;

	int e = 0;
	e = (a - a % 10) / 10;
	a = a - e * 10;

	int f = 0;
	f = (a - a % 1);

	printf("%d-%d-%d-%d-%d", b, c, d, e, f);

	return 0;

}
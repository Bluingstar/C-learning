#include<stdio.h>
int main(void) {
	int a = 0, b = 0, c = 0;
	scanf_s("%d,%d",&a,&b);
	c = b;
	b = a;
	a = c;
	printf("%d,%d", a, b);

	return 0;
}
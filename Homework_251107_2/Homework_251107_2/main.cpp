#include<stdio.h>
int main(void) {
	int a = 0, b = 0, count = 0, c = 0;
	scanf_s("%d,%d", &a, &b);
	for (int i = a; i <=b; i++)
	{
		c = 0;
		for (int j = 1; j <= i; j++) {
			if ( i % j == 0)
			{
				c = c + 1;
			}
		}
		if (c == 2) {
			count = count + 1;
		}
	}
	printf("count=%d", count);
	return 0;
}
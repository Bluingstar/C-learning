#include<stdio.h>
int main(void) {
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	int number[4];
	number[0] = a;
	number[1] = b;
	number[2] = c;
	number[3] = d;

	for (int i = 0; i < 4; i++)
	{
		if (e<number[i])
		{
			e = number[i];
		}
		else {
			e = e;
		}
	}
	printf("%d", e);

	return 0;
}
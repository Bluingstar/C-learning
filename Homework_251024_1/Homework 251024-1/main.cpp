#include<stdio.h>
int main()
{
	char a=0;
	int b = 0;

	scanf_s("%c", &a);
	b = a + 32;
	printf("%c", b);

	return 0;
}
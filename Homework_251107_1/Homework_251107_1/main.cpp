#include<stdio.h>
int main(void) {
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a0;
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9);
	int sum;
	sum = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a0;
	printf("sum=%d", sum);
	return 0;
}
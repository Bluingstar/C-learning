#include<stdio.h>
int main(void) {
	int num = 0, min = 0, sum = 0;
	scanf_s("%d", &num);
	if (num < 0) {
		num = -num;
	}
	while (num != 0) {
		min = num % 10;
		sum = sum + min;
		num = num / 10;
	}
	printf("sum=%d", sum);
	return 0;
}
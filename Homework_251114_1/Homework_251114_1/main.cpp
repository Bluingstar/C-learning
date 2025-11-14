#include<stdio.h>
int main(void) {
	int num[5];
	int min = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &num[i]);
	}
	min = num[0];
	for (int i = 0; i < 5; i++)
	{
		if (num[i] < min) {
			min = num[i];
		}
	}
	printf("min=%d", min);
	return 0;
}
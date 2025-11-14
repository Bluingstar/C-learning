#include<stdio.h>
int main(void) {
	int arr[6];
	for (int i = 0; i < 6; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++) {
			if (arr[j]<arr[j+1])
			{
				int a = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = a;
			}
		}
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
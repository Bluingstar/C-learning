#include<stdio.h>
int judge(int num);
int main(void) {
	int n = 0;
	scanf_s("%d", &n);
	n = judge(n);
	if (n==1)
	{
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}
int judge(int num) {
	int t = 0;
	int ret = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num%i==0)
		{
			t = t + 1;
		}
	}
	if (t==2)
	{
		ret = 1;
	}
	return ret;
}
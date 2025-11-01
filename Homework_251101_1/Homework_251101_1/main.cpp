#include<stdio.h>
int main(void) {
	int n=0,a=0,b=0,c=0;
	scanf_s("%d",&n);
	a = n / 100;
	b = (n / 10) % 10;
	c = n % 10;
	printf("%d%d%d",c,b,a );
	return 0;
}
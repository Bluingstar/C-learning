#include<stdio.h>
int main(void) {
	float x = 0, y = 0;
	scanf_s("%f", &x);
	if (x >= 20) {
		y = x - 3;
	}
	else if(x<=0){
		y = x * 3;
	}
	else {
		y = x + 3;
	}
	printf("y=%.1f", y);
	return 0;
}
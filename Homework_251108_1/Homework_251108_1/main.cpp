#include<stdio.h>
int main(void) {
	int m0 = 0, n0 = 0, k = 0, l = 0, m = 0, n = 0;
	scanf_s("%d %d", &m0, &n0);
	k = m0 % n0;
	m = m0;
	n = n0;
	while (k != 0) {
		m = n;
		n = k;
		k = m % n;
	}
	l = (m0 * n0) / n;
	printf("%d %d", n, l);
	return 0;
}
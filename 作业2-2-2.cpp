#include <stdio.h>

void max(int *p, int n, int *pMax) {
	int *pRight = p + n;
	int m = *p;

	p++;
	while (p < pRight) {
		if (*p > m) {
			m = *p;
		}
		p++;
	}

	*pMax = m;
}

int main() {
	int arr[4] = { 10, 40, 30, 50 };
	int m;

	max(arr, 4, &m);
	printf("max in array: %d\n", m);
	return 0;
}

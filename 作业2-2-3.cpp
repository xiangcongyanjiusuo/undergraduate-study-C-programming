#include <stdio.h>

void charCount(char *p, int n, int *pCount) {
	int count = 0;
	int i;

	for (i = 0; i < n; i++) {
		if (*p == '\0') {
			break;
		}
		else {
			count++;
		}
		p++;
	}

	*pCount = count;
}

int main() {
	char arr[] = { 'A', 'B', '\0', 'C', '\0' };
	int count;

	charCount(arr, 5, &count);
	printf("char num until 0: %d\n", count);
	return 0;
}

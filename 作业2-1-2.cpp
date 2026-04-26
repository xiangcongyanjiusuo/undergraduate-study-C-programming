#include <stdio.h>

int main() {
	char c = 'A';
	char * pc1 = &c;
	char * pc2 = pc1;

	c = 'B';
	printf("*pc1: %c\n", *pc1);
	printf("*pc2: %c\n\n", *pc2);

	*pc1 = 'C';
	printf("c: %c\n", c);
	printf("*pc2: %c\n\n", *pc2);

	*pc2 = 'D';
	printf("c: %c\n", c);
	printf("*pc2: %c\n\n", *pc2);

	return 0;
}

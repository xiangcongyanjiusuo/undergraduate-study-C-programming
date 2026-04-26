#include <stdio.h>

int main() {
	char c = 'A';
	short s = 10;
	int i = 100;

	char * pc = &c;
	short * ps = &s;
	int * pi = &i;

	printf("sizeof(*pc): %d\n", sizeof(*pc));
	printf("sizeof(*ps): %d\n", sizeof(*ps));
	printf("sizeof(*pi): %d\n\n", sizeof(*pi));

	printf("sizeof(pc): %d\n", sizeof(pc));
	printf("sizeof(ps): %d\n", sizeof(ps));
	printf("sizeof(pi): %d\n\n", sizeof(pi));

	return 0;
}

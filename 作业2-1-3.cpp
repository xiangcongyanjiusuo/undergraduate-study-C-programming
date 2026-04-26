#include <stdio.h>

void func(int a, int *p) {
	printf("in func - a: %d, &a: %p\n", a, &a);
	printf("in func - p: %p, &p: %p, *p: %d\n", p, &p, *p);
}

int main() {
	int a = 10;
	int *p = &a;

	printf("in main - a: %d, &a: %p\n", a, &a);
	printf("in main - p: %p, &p: %p, *p: %d\n", p, &p, *p);

	func(a, p);
	return 0;
}

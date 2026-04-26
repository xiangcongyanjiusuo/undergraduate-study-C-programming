#include <stdio.h>

int main() {
	int a[3][4] = {
		1, 2, 5,     7,	9, 11, 
		13, 15,	17,  19, 21, 23
	};

	printf("%p, %p\n", a, *a);
	printf("%p, %p\n", a[0], *(a + 0));
	printf("%p, %p\n", a[1], a + 1);
	printf("%p, %p\n", a[2], *(a + 2));
	printf("%p, %p\n", a[1][0], *(*(a + 1) + 2));

	return 0;
}

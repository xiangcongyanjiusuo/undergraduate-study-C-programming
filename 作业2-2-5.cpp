#include <stdio.h>
#include <stdio.h>

void reverse(int *p, int n);

int main() {
	int arr[4] = {10,20,30,40};
	int i;

	reverse(arr, 4);
	for (i = 0; i < 4; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}
void reverse(int *p, int n)
{
	int *pt,i,t,k;
	pt=p;
	for(i=0,k=n-1;i<=(n/2);i++,k--)
		{t=*(pt+i);		*(pt+i)=*(pt+k);	*(pt+k)=t;} 
}

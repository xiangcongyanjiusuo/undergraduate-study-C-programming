#include <stdio.h>

int main() {
	char * seasons[] = {
		"spring", "summer",
		"autumn", "winter"
	};
	int k;
	printf("Input the number for a season\n"); 
	scanf("%d",&k);
	if(k>=1&&k<=4)
		printf("%d:%s",k,seasons[k-1]);
	else
		printf("Input wrong number:%d",k);
	return 0;
}

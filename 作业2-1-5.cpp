#include <stdio.h>
#define    N    30

void findMax(int score[], int num[], int n, int *a, int *b)
{
	int i,j,t;
	*a=0;*b=0;
	for(i=0;i<=n-1;i++)
			if(score[i]>=score[i+1])
				{*a=score[i];	*b=num[i];}
} 

int main() {
	int i, n;
	int scores[N];
	int ids[N];
	int maxScore, maxScoreId;

	printf("input students count:\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("(%d): score and id\n", i + 1);
		scanf("%d%d", &scores[i], &ids[i]);
	}

	findMax(scores,ids,n,&maxScore,&maxScoreId);
	printf("max score: %d -- %d\n",maxScore,maxScoreId);

	return 0;
}

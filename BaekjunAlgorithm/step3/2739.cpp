// 백준 2739번
#include<stdio.h>
int main()
{
	int N;
	int i;
	scanf("%d", &N);
	for (i = 1; i <= 9; i++) {
		{
			printf("%d * %d = %d", N, i, N * i);
		}printf("\n");
	}
	return 0;

}
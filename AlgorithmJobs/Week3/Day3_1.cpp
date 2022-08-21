// maxofarr
#include <stdio.h>

int main()
{
	int array[9][9];
	int max = 0;
	int ii, jj;
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			scanf("%d ", &array[i][j]);
			if (array[i][j] > max)
			{
				max = array[i][j];
				ii = i;
				jj = j;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", ii + 1, jj + 1);


	return 0;
}

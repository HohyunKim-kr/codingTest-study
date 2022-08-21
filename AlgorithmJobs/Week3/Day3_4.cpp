// attackrange
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int input;
	scanf("%d", &input);

	int arr[input][input];
	int i, j;

	for (i = 0; i < input; i++) {
		for (j = 0; j < input; j++) {
			arr[i][j] = 0;
		}
	}

	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	int dis;
	x  -= 1;
	y  -= 1;

	for (i = 0; i < input; i++) {
		for (j = 0; j < input; j++) {
			dis  = abs(i - x) + abs(j - y);
			if (dis <= z) {
				arr[i][j] = dis;
			}
		}
	}




	for (i = 0; i < input; i++) {
		for (j = 0; j < input; j++) {
			if (i == x  && j == y) {
				printf("x ");
			}
			else {
				printf("%d ", arr[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}

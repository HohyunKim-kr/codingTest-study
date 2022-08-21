#include <stdio.h>
// 행렬뒤집기
int main() {

	int input;
	scanf("%d", &input);

	int i, j, z;

	int arr[10][10];

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			arr[i][j] = 0;
		}
	}

	for (z = 0; z <= input - 1; z++) {
		for (i = 0; i < 10; i++) {
			if (arr[i][z] == 1) {
				arr[i][z] = 0;
			}
			else {
				arr[i][z] = 1;
			}
		}
		for (j = 0; j < 10; j++) {
			if (arr[z][j] == 1) {
				arr[z][j] = 0;
			}
			else {
				arr[z][j] = 1;
			}
		}
		if (arr[z][z] == 1) {
			arr[z][z] = 0;
		}
		else {
			arr[z][z] = 1;
		}

	}


	//테스트
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

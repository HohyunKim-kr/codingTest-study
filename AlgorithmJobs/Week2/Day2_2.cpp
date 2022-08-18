// 소수판별2 **
#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int N, M;

int numArray[20010] = { 0, };

int main() {

	scanf("%d %d", &N, &M);

	int large, small;

	if (N >= M) {
		large = N;
		small = M;
	}
	else {
		large = M;
		small = N;
	}


	// 숫자 배열 채우기
	for (int i = 1; i <= large; i++)
		numArray[i] = i;

	// large 까지의 소수를 모두 구한다 -> 소수는 자신의 값 할당,  소수가 아니면 0값을 할당!!  // 자연수 1은 소수 아니다
	for (int i = 2; i <= sqrt(large); i++) {  // 반복 횟수는 구하려는 범위 값의 제곱근 -> 모든 가능한 배수들을 판단하므로 제곱근이하 까지만 반복하여
												// 소수가 아닌 수를 모두 찾을 수 있다!!

		if (numArray[i] != 0) {

			int count = 2;
			int mul = numArray[i] * count;

			while (mul <= large) {
				numArray[mul] = 0;  // 소수가 아닌 수에 0 할당

				count++;
				mul = numArray[i] * count;
			}
		}
	}


	for (int j = small; j <= large; j++) {

		if (numArray[j] != 0 && numArray[j] != 1)
			printf("%d ", numArray[j]);
	}

	return 0;
}
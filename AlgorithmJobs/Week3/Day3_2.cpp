// offset 
// 1. 가장 자리 숫자에 아주 큰 수 채우기
// 2. 각각의 숫자에 대해서 상하좌우와 비교 후
// 3. 내가 가장 작다면 별표 출력, 그게 아니라면 숫자 출력.
#include <stdio.h>

int main() {

    //Please Enter Your Code Here
    int arr[10][10];

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i <= 6; i++)
    {
        arr[0][i] = 99;
        arr[i][0] = 99;
        arr[6][i] = 99;
        arr[i][6] = 99;
    }
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; ++j)
        {
            if (arr[i][j] < arr[i - 1][j] && arr[i][j] < arr[i + 1][j]
                && arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1])
            {
                printf("*");
            }
            else printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
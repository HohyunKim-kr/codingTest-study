// 알고리즘 잡스 class president
#include <stdio.h>

int main() {

    int n; // 학생수
    scanf("%d", &n);

    int arr[1010][6]; //학생별 반 저장
    int stu[1010] = { 0 };

    if (n < 3 || n>1000) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &arr[i][j]); //학생별 5학년까지 반 저장
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= 5; k++) {
                //중복될때 
                if (arr[i][k] == arr[j][k]) {
                    stu[i]++; //학생별 겹치는 양 조사
                    break;
                }
            }
        }
    }
// 프로그래머스 Lv1 직사각형 별찍기

#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
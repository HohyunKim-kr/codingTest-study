// 백준 2525번 오븐 시계
#include <iostream>

using namespace std;


int main()
{
    int A, B, C;
    int up;
    int down;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    if (B + C < 60)
    {
        printf("%d %d", A, B + C);
    }
    else
    {
        up = (B + C) / 60;
        down = (B + C) % 60;
        if (A + up >= 24)
        {
            printf("%d %d", A + up - 24, down);
        }
        else
        {
            printf("%d %d", A + up, down);
        }

    }
    return 0;
}
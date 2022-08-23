// 백준 주사위 세개 2480번
#include <iostream>

using namespace std;
int max(int x, int y)
{
    if (x >= y) return x;
    else return y;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
    {
        cout << 10000 + a * 1000;
    }
    else if (a == b || a == c)
    {
        cout << 1000 + a * 100;
    }
    else if (b == c)
    {
        cout << 1000 + b * 100;
    }
    else
    {
        cout << max(max(a, b), c) * 100;
    }
    return 0;
}
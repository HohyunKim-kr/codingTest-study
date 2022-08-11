// 알고리즘 잡스 131번
// 자연수n이 주어질 때, n 이 소수인지 판별하는 프로그램을 작성하여라. 
// 여기서 소수란, 약수가 1과 자기자신밖에 존재하지 않는 수를 말한다.

#include <stdio.h>

int main() {

    //Please Enter Your Code Here
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; ++i)
    {
        if (n % i == 0 && i != 1)
        {
            printf("NO");
            break;
        }
        else if ((n % i != 0 && n - 1 == i) || n == 2)
        {
            printf("YES");
            break;
        }
    }

    return 0;
}
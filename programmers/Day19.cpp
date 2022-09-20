// 프로그래머스 LV1 자릿수 더하기
#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;

    while (n != 0)
    {
        answer = answer + n % 10;
        n = n / 10;
    }
    return answer;
}
// 프로그래머스 LV1 짝수와 홀수 
#include <string>
#include <vector>

using namespace std;

// c언어 삼항 연산자로 푸는 것이 더 좋은듯...

string solution(int num) {
    if (num % 2 != 0) return "Odd";
    else return "Even";
}
// 프로그래머스 LV1 평균구하기 벡터 + 반복자 사용

#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;

    for (auto iter = arr.begin(); iter != arr.end(); ++iter)
    {
        sum += *iter;
    }
    answer = sum / arr.size();

    return answer;
}
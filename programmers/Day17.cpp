//  문자열 내림차순으로 배치하기 프로그래머스

#include <string>
#include <vector>
#include <iostream>
#include  <algorithm>

using namespace std;

string solution(string s) {

    sort(s.begin(), s.end(), greater<>());

    return s;
}
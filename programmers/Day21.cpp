﻿// 프로그래머스 LV1 - 약수의합
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) answer += i;
    }
    return answer;
}
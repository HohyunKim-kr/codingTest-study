// 프로그래머스 네트워크 
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = n;
    int chk = 0;
    for (int i = 0; i < computers.size(); i++)
    {
        for (int j = 0; j < computers[i].size(); j++)
        {
            if (computers[i][j] == 1)
            {
                if (computers[j][i] == 1 && i != j)
                {
                    if (chk == 0)
                    {
                        answer--;
                        chk++;
                    }
                    else
                    {
                        chk = 0;
                    }
                }
            }
        }
    }
    return answer;
}
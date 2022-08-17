// 프로그래머스 "체육복"
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> student(n, 1);

    if (n < 2 || n > 30) return answer;
    if (lost.size() < 0 || reserve.size() < 0) return answer;

    for (auto l : lost)
        student[l - 1]--;

    for (auto r : reserve)
        student[r - 1]++;

    for (int i = 0; i < student.size(); i++)
    {
        if (student[i] > 0)
            continue;
        if (i != 0 && student[i - 1] > 1)
        {
            student[i - 1]--;
            student[i]++;
        }
        else if (i != student.size() - 1 && student[i + 1] > 1)
        {
            student[i + 1]--;
            student[i]++;
        }
        else {}
    }


    for (auto s : student)
    {
        if (s > 0)
            answer++;
    }

    return answer;
}
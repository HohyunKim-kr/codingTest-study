// 프로그래머스 가장 긴 펠린드 룸
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;
int solution(string s)
{
    int answer = 1;//같은게 아에 없으면 1이 max length다.
    int chk = 0;
    unordered_set<int> a;

    for (int i = 0; i < s.size() / 2; i++)
    {
        for (int j = s.size(); j > s.size() / 2;)
        {
            if (s[i] != s[j])
            {
                j--;
                continue;
            }
            else
            {
                if ((j - i) % 2 != 0)
                {

                    j--;
                    continue;
                }
                else
                {
                    cout << "p의가능성";
                    j--;
                    chk++;
                    break;
                }


            }
        }

    }
    cout << "chk" << chk << endl;
    if (chk != 0) answer = chk * 2 + 1;
    return answer;
}
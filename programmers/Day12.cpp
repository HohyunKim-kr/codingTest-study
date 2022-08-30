// 프로그래머스 - 이중우선순위 큐 -
#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    priority_queue<int, vector<int>, less<int>> maxQ;
    priority_queue<int, vector<int>, greater<int>> minQ;
    //int numMin=0;
    //int numMax=0;
    for (auto& i : operations)
    {
        if (i[0] == 'I')
        {
            minQ.push(stoi(i.substr(2, i.length()))); // 숫자 insert
            maxQ.push(stoi(i.substr(2, i.length())));
        }
        else if (i[0] == 'D' && i[2] == '1' && !maxQ.empty()) maxQ.pop(); //최댓값 삭제
        else if (i[0] == 'D' && i[2] == '-' && !minQ.empty()) minQ.pop(); //최솟값 삭제
        //cout<<i.substr(2,i.length());
    }

    if (!minQ.empty() && !maxQ.empty() && minQ.top() != maxQ.top())
    {
        answer.push_back(maxQ.top());
        answer.push_back(minQ.top());
    }
    else
    {
        answer.push_back(0);
        answer.push_back(0);
    }

    /*while(1)
    {
        if()
        if(q.empty() && operations.size()==0){
            answer.add(0);
            answer.add(0);
            break;
        }
        else if
    }*/
    //cout << "1";
    return answer;
}
#include <iostream>

using namespace std;


int main()
{
	string str = "hello world";
	int idx = 3;
	int count = 6;

	str.erase(idx, count);  // index부터 count갯수 만큼 제거
	cout << str << endl; // 출력: helld

	str.erase(str.begin());  // str 맨 처음 제거
	cout << str << endl; // 출력: elld

	str.erase(str.end() - 1);  // str 맨 뒤 제거
	cout << str << endl; // 출력: ell

	return 0;
}
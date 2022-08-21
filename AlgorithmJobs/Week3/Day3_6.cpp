// 알고리즘잡스 rook
#include <vector>
#include<iostream>

using namespace std;

typedef struct loc {
	int x;
	int y;
}loc;

int main() {

	vector< vector<int> > arr(8, vector<int>(8, 0));

	loc king;
	loc look;
	vector<loc> kimul;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> arr[i][j];

			if (arr[i][j] == 1) {
				king.x = i;
				king.y = j;
			}
			else if (arr[i][j] == 2) {
				look.x = i;
				look.y = j;
			}
			else if (arr[i][j] == 3) {
				loc tmp;
				tmp.x = i;
				tmp.y = j;
				kimul.push_back(tmp);
			}
		}
	}

	if (king.x == look.x) {

		int max, min;

		if (king.y > look.y) {
			max = king.y;
			min = look.y;
		}
		else {
			max = look.y;
			min = king.y;
		}

		for (int i = 0; i < kimul.size(); i++) {

			if (kimul[i].x == king.x && (kimul[i].y > min && kimul[i].y < max)) {
				cout << 0 << endl;
				return 0;
			}
		}
	}
	else if (king.y == look.y) {

		int max, min;

		if (king.x > look.x) {
			max = king.x;
			min = look.x;
		}
		else {
			max = look.x;
			min = king.x;
		}

		for (int i = 0; i < kimul.size(); i++) {

			if (kimul[i].y == king.y && (kimul[i].x > min && kimul[i].x < max)) {
				cout << 0 << endl;
				return 0;
			}
		}
	}
	else {
		cout << 0 << endl;
		return 0;
	}

	cout << 1 << endl;
	return 0;
}

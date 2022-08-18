// 백준 10801번 카드게임
#include <iostream>

using namespace std;

int main() {

    int a[10];
    int b[10];

    int aw = 0, bw = 0;

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < 10; i++) {
        if (a[i] > b[i]) {
            aw++;
        }
        else if (b[i] > a[i]) {
            bw++;
        }

    }
    if (aw > bw) cout << "A";
    else if (bw > aw) cout << "B";
    else cout << "D";

}
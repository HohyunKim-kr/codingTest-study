// 백준 피라미드
#include <iostream>

using namespace std;

int temp[9];

int main() {

    int total, startNum;
    int array[9] = { 1,2,3,4,5,6,7,8,9 };

    int reverse = -1;
    int position = 0;
    int index = 0;

    cin >> total >> startNum;

    position = startNum - 1;

    for (int i = 0; i < total; i++)
    {

        for (int j = 0; j < total - i - 1; j++)
            cout << " ";

        for (int j = 0; j < 2 * i + 1; j++)
        {
            temp[j] = array[position++];
            if (position == 9)
                position = 0;
        }

        if (reverse > 0)
        {
            for (int j = 0; j < 2 * i + 1; j++)
                cout << temp[j];
        }
        else {
            for (int j = 2 * i; j >= 0; j--)
                cout << temp[j];
        }


        reverse *= -1;
        cout << endl;

    }

    return 0;
}
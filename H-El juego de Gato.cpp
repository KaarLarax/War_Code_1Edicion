#include <iostream>

using namespace std;

int main() {
    char t[3][3];
    char aux;
    for (auto &i: t) {
        for (char &j: i) {
            cin >> j;
        }
    }
    for (auto &i: t) {
        if (i[0] == i[1] && i[2] == i[1]) {
            aux = i[0];
        }
    }
    for (int i = 0; i < 3; ++i) {
        if (t[0][i] == t[1][i] && t[2][i] == t[1][i]) {
            aux = t[0][i];
        }
    }

    if (t[0][0] == t[1][1] && t[0][0] == t[2][2] || t[0][2] == t[1][1] && t[1][1] == t[2][0]) {
        aux = t[1][1];
    }
    cout << aux << endl;

    return 0;
}
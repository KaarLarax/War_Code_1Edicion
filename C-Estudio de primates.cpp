#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int c, f, output = 0;
    cin >> f;
    cin >> c;
    char mapa[c * f];
    for (int i = 0; i < f * c; ++i) {
        char casilla;
        cin >> casilla;
        mapa[i] = casilla;
    }
    for (char ca: mapa) {
        if (ca == 'C') {
            output++;
        }
    }
    cout << output << endl;
    return 0;
}
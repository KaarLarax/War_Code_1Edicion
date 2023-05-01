#include <iostream>

using namespace std;

int chartoint(char);

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string x;
    cin >> x;
    int mayor = chartoint(x[0]);
    for (int i = 1; i < x.length(); ++i) {
        if (mayor < chartoint(x[i])) {
            mayor = chartoint(x[i]);
        }
    }
    int menor = chartoint(x[0]);
    for (int i = 1; i < x.length(); ++i) {
        if (menor >= chartoint(x[i])) {
            menor = chartoint(x[i]);
        }
    }
    cout << mayor * menor << endl;
    return 0;
}

int chartoint(char c) {
    return c - '0';
}
#include <iostream>
#include <climits>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    if (n > 1e4) {
        cout << 0 << endl;
        return 0;
    }
    long int suma = 0, minimo_inpar = LONG_MAX, aux;
    bool band = false;
    for (int i = 0; i < n; ++i) {
        cin >> aux;
        suma += aux;
        if (aux % 2 == 1) {
            minimo_inpar = min(minimo_inpar, aux);
            band = true;
        }
    }

    if (!band) {
        cout << 0 << endl;
    } else if (suma % 2 == 0) {
        suma -= minimo_inpar;
        cout << suma << endl;
    } else if (suma % 2 == 1) {
        cout << suma << endl;
    }

    return 0;
}
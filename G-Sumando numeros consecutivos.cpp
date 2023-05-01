#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int x, n;
    cin >> x;
    n = (x - 10) / 5;
    n += 2;
    cout << n << endl;

    return 0;
}
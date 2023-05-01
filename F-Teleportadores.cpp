#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int stations, coins;
    cin >> stations >> coins;

    vector<int> teleports(stations + 1);
    teleports[0] = 0;
    for (int i = 1; i <= stations; i++) {
        cin >> teleports[i];
        teleports[i] += i;
    }
    sort(teleports.begin(), teleports.end());
    int origin_return = 0;
    for (int i = 1; i <= stations; i++) {
        if (coins < teleports[i]) break;
        coins -= teleports[i];
        origin_return++;
    }
    cout << origin_return << '\n';

    return 0;
}
#include <iostream>

using namespace std;

int rest_first(int k, int mid, int volp_acu[]) {
    if (k == 0)
        return volp_acu[mid];
    else
        return volp_acu[mid] - volp_acu[k - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        if (i > 0)
            p[i] += p[i - 1];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int v, k;
        cin >> v >> k;
        int mini = k, maxi = n - 1;
        int ans = n;
        while (mini <= maxi) {
            int mid = (maxi + mini) / 2;
            int sum = rest_first(k, mid, p);
            if (sum >= v) {
                ans = mid;
                maxi = mid - 1;
            } else {
                mini = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
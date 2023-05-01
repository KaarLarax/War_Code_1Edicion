#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    vector<int> frec_b(26, 0);
    vector<int> frec_a(26, 0);
    string str;
    cin >> str;

    int maxsum = 0;
    int char_unique_a = 0, char_unique_b = 0;
    for (char c: str) {
        frec_b[c - 'a']++;
        if (frec_b[c - 'a'] == 1) {
            char_unique_b++;
        }
    }
    for (char c: str) {
        frec_b[c - 'a']--;
        if (frec_b[c - 'a'] == 0) {
            char_unique_b--;
        }
        frec_a[c - 'a']++;
        if (frec_a[c - 'a'] == 1) {
            char_unique_a++;
        }
        int sum = char_unique_a + char_unique_b;
        maxsum = max(maxsum, sum);
    }
    cout << maxsum << '\n';

    return 0;
}
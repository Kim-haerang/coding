#include <iostream>
using namespace std;

long long dpi[101];

void solve() {
    dpi[1] = dpi[2] = dpi[3] = 1;
    dpi[4] = dpi[5] = 2;

    for (int i = 6; i <= 100; i++) {
        dpi[i] = dpi[i - 3] + dpi[i - 2];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    int t, n;
    cin >> t; 

    while (t--) {
        cin >> n;
        cout << dpi[n] << '\n';
    }
    return 0;
}
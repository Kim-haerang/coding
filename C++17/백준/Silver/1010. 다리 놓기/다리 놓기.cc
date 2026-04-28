#include <iostream>
using namespace std;

int dp[31][31];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i <= 30; i++) {
        dp[i][0] = 1;
        dp[i][i] = 1;
        for (int j = 1; j < i; j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }

    int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        cout << dp[y][x] << '\n';
    }
    return 0;
}
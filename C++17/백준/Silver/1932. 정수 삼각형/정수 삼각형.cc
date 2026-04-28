#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int dp[500][500];

	cin >> dp[0][0];

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> dp[i][j];
			if (j == 0) dp[i][j] += dp[i - 1][j];
			else if (j == i) dp[i][j] += dp[i - 1][j - 1];
			else dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
	}
	
	int max_val=-100001;
	for (int i = 0; i < n; i++) {
		max_val = max(dp[n - 1][i], max_val);
	}
	cout << max_val;
	return 0;
}
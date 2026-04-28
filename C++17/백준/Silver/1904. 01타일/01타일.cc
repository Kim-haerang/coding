#include <iostream>
using namespace std;

int dpi[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	dpi[1] = 1;
	dpi[2] = 2;

	for (int i = 3; i <= n; i++) {
		dpi[i] = (dpi[i - 1] + dpi[i - 2]) % 15746;
	}
	cout << dpi[n];
	return 0;
}
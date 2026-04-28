#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int M = 1, m = 1000000;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		M = max(temp, M);
		m = min(temp, m);
	}
	cout << M * m;
	return 0;
}
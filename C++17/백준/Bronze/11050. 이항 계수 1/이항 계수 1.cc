#include <iostream>
using namespace std;

int fac(int x) {
	int result = 1;
	for (int i = 1; i <= x; i++) {
		result *= i;
	}
	return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	cout << fac(n) / (fac(n - k) * fac(k));
	return 0;
}
#include <iostream>
using namespace std;

int n;
int f[41];

void fib() {
	f[1] = f[2] = 1;
	for (int i = 3; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	fib();
	cout << f[n] << " " << n - 2;
	return 0;
}
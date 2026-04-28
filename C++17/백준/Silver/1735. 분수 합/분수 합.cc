#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;
	int a = a1 * b2 + a2 * b1;
	int b = b1 * b2;
	cout << a / gcd(a, b) << ' ' << b / gcd(a, b);
	return 0;
}
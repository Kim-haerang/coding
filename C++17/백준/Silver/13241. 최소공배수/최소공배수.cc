#include <iostream>
using namespace std;

int gcd(long long a, long long b) {
	while (b != 0) {
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	
	long long a, b;
	cin >> a >> b;
	cout << (a * b) / gcd(a, b) << '\n';
	return 0;
}
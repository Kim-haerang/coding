#include <iostream>
using namespace std;

bool isPrime(long long n) {
	if (n < 2) return false; 
	for (long long i = 2; i * i <= n; i++) { 
		if (n % i == 0) return false;
	}
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	long long a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		while (!isPrime(a)) a++;
		cout << a << '\n';
	}
	return 0;
}
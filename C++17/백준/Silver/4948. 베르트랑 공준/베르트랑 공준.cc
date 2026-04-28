#include <iostream>
#include <vector>
using namespace std;

const int MAX = 123456 * 2;
bool isPrime[MAX + 1];

void sieve() {
	for (int i = 2; i <= MAX; i++) isPrime[i] = true;
	for (int i = 2; i * i <= MAX; i++) {
		if (isPrime[i]) {
			for (int j = i * i; j <= MAX; j += i)
				isPrime[j] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	sieve();

	int n;
	while (cin >> n && n != 0) {
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (isPrime[i]) cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}
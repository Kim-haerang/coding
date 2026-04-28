#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;
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
	cin >> n;

	int m;

	for (int i = 0; i < n; i++) {
		cin >> m;
		int cnt = 0;

		for (int j = 2; j <= m / 2; j++) {
			if (isPrime[j] && isPrime[m - j]) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
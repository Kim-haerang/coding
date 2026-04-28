#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int f[21];
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 20; i++) {
		f[i] = f[i-1]+ f[i-2];
	}
	int n;
	cin >> n;
	cout << f[n];
	return 0;
}
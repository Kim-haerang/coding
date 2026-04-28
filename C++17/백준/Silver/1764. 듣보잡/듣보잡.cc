#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	string str;

	map<string, int> M;

	for (int i = 0; i < n; i++) {
		cin >> str;
		M[str] = 1;
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		cin >> str;
		if (M[str] == 1) {
			M[str]++;
			cnt++;
		}
	}

	cout << cnt << '\n';

	for (auto& p : M) {
		if (p.second == 2) cout << p.first << '\n';
	}
	return 0;
}
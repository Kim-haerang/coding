#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	map<string, bool> M;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;
		M[str] = true;
	}

	int cnt = 0;

	for (int i = 0; i < m; i++) {
		cin >> str;
		if (M[str]) cnt++;
	}

	cout << cnt << '\n';
	return 0;
}

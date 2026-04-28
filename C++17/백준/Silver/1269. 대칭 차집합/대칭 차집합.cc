#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	map<int, bool> mp;

	cin >> n >> m;
	int num;

	for (int i = 0; i < n; i++) {
		cin >> num;
		mp[num] = true;
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		cin >> num;
		if (mp[num] == true) cnt++;
	}
	cout << (n + m) - 2 * cnt;
	return 0;
}
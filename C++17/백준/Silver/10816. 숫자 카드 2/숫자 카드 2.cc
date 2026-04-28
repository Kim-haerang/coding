#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n;

	int num;

	map<int, int> M;

	for (int i = 0; i < n; i++) {
		cin >> num;
		M[num]++;
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> num;
		cout << M[num] << " ";
	}
	return 0;
}
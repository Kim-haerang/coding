#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<long long> v(n);
	vector<long long> diff;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (i > 0) diff.push_back(v[i] - v[i - 1]);
	}

	long long g = diff[0];
	for (int i = 1; i < diff.size(); i++) {
		g = gcd(g, diff[i]);
	}

	long long total = (v[n - 1] - v[0]) / g + 1;
	cout << total - n;
	return 0;
}
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	map<int, int> freq;

	int sum = 0; 
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
		freq[v[i]]++;
	}
	sort(v.begin(), v.end());

	cout << (int)round((double)sum / n) << '\n';
	cout << v[n / 2] << '\n';

	int M = 0;
	for (auto& p : freq)  M = max(M, p.second);
	int cnt = 0;
	for (auto& p : freq) {
		if (p.second == M) {
			cnt++;
			if (cnt == 2) {
				cout << p.first << '\n';
				break;
			}
		}
	}
	if (cnt < 2) {
		for (auto& p : freq) {
			if (p.second == M) {
				cout << p.first << '\n';
				break;
			}
		}
	}
	cout << v[n - 1] - v[0] << '\n';
	return 0;
}
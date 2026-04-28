#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	int cnt = 0;

	for (int i = 0; i < 5; i++) {
		int temp;
		cin >> temp;
		cnt += temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	cout << cnt / 5 << '\n';
	cout << v[2] << '\n';

	return 0;
}
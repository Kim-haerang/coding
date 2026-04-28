#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
		sort(v.begin(), v.end(), greater<int>());
	}
	cout << v[k-1] << '\n';
	return 0;
}
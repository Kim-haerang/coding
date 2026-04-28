#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> v;

int search(int start, int end, long long num) {
	while (start <= end) {
		int mid = (start + end) / 2;
		if (v[mid] == num) return 1;
		else if (v[mid] > num) end = mid - 1;
		else start = mid + 1;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	long long element;

	for (int i = 0; i < n; i++) {
		cin >> element;
		v.push_back(element);
	}

	sort(v.begin(), v.end());

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> element;
		cout << search(0, n - 1, element) << " ";
	}
	return 0;
}
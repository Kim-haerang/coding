#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num[10001] = { 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp = 0;
		cin >> temp;
		num[temp]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < num[i]; j++) {
			cout << i << '\n';
		}
	}
	return 0;
}
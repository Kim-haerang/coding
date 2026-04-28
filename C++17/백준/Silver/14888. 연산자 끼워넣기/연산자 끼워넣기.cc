#include <iostream>
#include <vector>
using namespace std;

int max_val = -1000000001;
int min_val = 1000000001;

vector<int> v;
vector<int> s;
int n;

void dfs(int index, int result) {
	if (index == n) {
		if (result > max_val) max_val = result;
		if (result < min_val) min_val = result;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (s[i] > 0) {
			s[i]--;
			if (i == 0) dfs(index + 1, result + v[index]);
			else if (i == 1) dfs(index + 1, result - v[index]);
			else if (i == 2) dfs(index + 1, result * v[index]);
			else if (i == 3) dfs(index + 1, result / v[index]);
			s[i]++;
		}
	}
}

int main() {
	cin >> n;
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	for (int i = 0; i < 4; i++) {
		cin >> temp;
		s.push_back(temp);
	}
	dfs(1, v[0]);
	cout << max_val << '\n';
	cout << min_val << '\n';
	return  0;
}
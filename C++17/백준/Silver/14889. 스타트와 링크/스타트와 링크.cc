#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int grid[20][20];
bool visited[20];
int n;
long long min_val = 1000000001;
void calculate() {
	int start = 0, link = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i] && visited[j]) start += grid[i][j];
			if (!visited[i] && !visited[j]) link += grid[i][j];
		}
	}
	min_val = min(min_val, (long long)abs(start - link));

}
void dfs(int index, int cnt) {
	if (cnt == n/2) {
		calculate();
		return;
	}
	for (int i = index; i < n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			dfs(i + 1, cnt + 1);
			visited[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> grid[i][j];
	}
	dfs(0, 0);
	cout << min_val;
	return 0;
}
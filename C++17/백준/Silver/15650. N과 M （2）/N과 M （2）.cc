#include <iostream>
using namespace std;

int n, m;
int arr[10];
bool visited[10];

void dfs(int cnt, int start) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) cout << arr[i] << " ";
		cout << '\n';
		return;
	}
	for (int i = start; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[cnt] = i;
			dfs(cnt + 1, i + 1);
			visited[i] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	dfs(0, 1);
	return 0;
}
#include <iostream>
using namespace std;

char grid[6561][6562];
int n;

void solve(int row, int col, int size, bool isStar) {
	if (size == 1) {
		grid[row][col] = isStar ? '*' : ' ';
		return;
	}
	int next = size / 3;
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			bool star = isStar && !(c == 1 && r == 1);
			solve(row + r * next, col + c * next, next, star);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	solve(0, 0, n, true);

	for (int i = 0; i < n; i++) {
		cout << grid[i] << '\n';
	}
	return 0;
}
#include <iostream>
using namespace std;

int n, cnt = 0;
int col[15];

bool check(int level) {
	for (int i = 0; i < level; i++) {
		if (col[i] == col[level] || abs(col[i] - col[level]) == level - i) return false;
	}
	return true;
}

void nqueen(int row) {
	if (row == n)cnt++;
	else {
		for (int i = 0; i < n; i++) {
			col[row] = i;
			if (check(row)) nqueen(row + 1);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	nqueen(0);
	cout << cnt;
	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> blanck;
int grid[9][9];

bool check(int r, int c, int val) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (grid[i][c] == val || grid[r][i]==val) return false;
		}
	}
	int nr = (r / 3) * 3;
	int nc = (c / 3) * 3;

	for (int i = nr; i < nr + 3; i++) {
		for (int j = nc; j < nc + 3; j++) {
			if (grid[i][j]==val) return false;
		}
	}
	return true;
}

void dfs(int x) {
	if (x == blanck.size()) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << grid[i][j] << " ";
			}
			cout << '\n';
		}
		exit(0);
	}
	int r = blanck[x].first;
	int c = blanck[x].second;

	for (int i = 1; i < 10; i++) {
		if (check(r, c, i)) {
			grid[r][c] = i;
			dfs(x + 1);
			grid[r][c] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 0) {
				blanck.push_back({ i,j });
			}
		}
	}
	dfs(0);
	return 0;
}
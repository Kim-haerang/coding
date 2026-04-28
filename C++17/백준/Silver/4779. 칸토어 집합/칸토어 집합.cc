#include <iostream>
#include <string>
using namespace std;

string solve(int n) {
	if (n == 0) return "-";
	string prev = solve(n - 1);
	string space(prev.size(), ' ');
	return prev + space + prev;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	while (cin >> n) {
		cout << solve(n) << '\n'; 
	}
	return 0;
}
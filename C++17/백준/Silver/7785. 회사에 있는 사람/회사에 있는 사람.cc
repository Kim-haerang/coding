#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	set<string, greater<string>> s;

	string name, status;

	for (int i = 0; i < n; i++) {
		cin >> name >> status;
		if (status == "enter") {
			s.insert(name);
		}
		else s.erase(name);
	}

	for (auto& p : s) {
		cout << p << '\n';
	}
	return 0;
}
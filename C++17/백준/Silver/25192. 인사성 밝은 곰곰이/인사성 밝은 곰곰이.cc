#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	set<string> s;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (str == "ENTER") s.clear();
		else {
			if (s.find(str) == s.end()) {
				cnt++;
				s.insert(str);
			}
		}
	}
	cout << cnt;
	return 0;
}
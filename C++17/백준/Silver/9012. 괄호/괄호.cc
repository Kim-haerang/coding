#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	bool result;
	string str;

	for (int i = 0; i < n; i++) {
		stack<char> s;
		result = true;
		cin >> str;

		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(') s.push(str[j]);
			else {
				if (!s.empty()) s.pop();
				else result = false;
			}
		}
		if (!s.empty()) result = false;

		if (result) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}
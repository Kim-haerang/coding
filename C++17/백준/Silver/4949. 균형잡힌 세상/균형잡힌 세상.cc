#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	bool result;
	string str;
	while (true) {
		getline(cin, str);
		if (str == ".") break;
		stack<char> s;
		result = true;

		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[') s.push(str[i]);
			else if (str[i] == ')') {
				if (!s.empty() && s.top() == '(') s.pop();
				else result = false;
			}
			else if (str[i] == ']') {
				if (!s.empty() && s.top() == '[') s.pop();
				else result = false;
			}
		}
		
		if (s.empty() && result) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}
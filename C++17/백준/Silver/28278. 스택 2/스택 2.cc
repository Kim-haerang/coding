#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n;
	cin >> n;
	
	stack<int> s;
	int m, x;

	for (int i = 0; i < n; i++) {
		cin >> m;
		if (m == 1) {
			cin >> x;
			s.push(x);
		}
		else if (m == 2) {
			if (s.empty()) cout << "-1\n";
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (m == 3) {
			cout << s.size() << '\n';
		}
		else if (m == 4) {
			cout << s.empty() << '\n';
		}
		else {
			if (s.empty()) cout << "-1\n";
			else cout << s.top() << '\n';
		}
	}
	return 0;
}
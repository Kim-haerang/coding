#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int num, temp;
	deque<int> d;

	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num == 1) {
			cin >> temp;
			d.push_front(temp);
		}
		else if (num == 2) {
			cin >> temp;
			d.push_back(temp);
		}
		else if (num == 3) { 
			if (d.empty()) cout << -1 << '\n';
			else {
				cout << d.front() << '\n';
				d.pop_front(); 
			}
		}
		else if (num == 4) { 
			if (d.empty()) cout << -1 << '\n';
			else {
				cout << d.back() << '\n';
				d.pop_back(); 
			}
		}
		else if (num == 5) {
			cout << d.size() << '\n';
		}
		else if (num == 6) {
			cout << (d.empty() ? 1 : 0) << '\n';
		}
		else if (num == 7) {
			if (d.empty()) cout << -1 << '\n';
			else cout << d.front() << '\n';
		}
		else if (num == 8) { 
			if (d.empty()) cout << -1 << '\n';
			else cout << d.back() << '\n';
		}
	}
	return 0;
}
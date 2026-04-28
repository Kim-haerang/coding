#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, input;
	int cnt = 1;
	queue<int> now;
	stack<int> wait;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		now.push(input);
	}
	while (1) {
		if (!now.empty() && now.front() == cnt) {
			now.pop();
			cnt++;
		}
		else if (!wait.empty() && wait.top() == cnt) {
			wait.pop();
			cnt++;
		}
		else {
			if (now.empty()) break;
			wait.push(now.front());
			now.pop();
		}
	}
	if (wait.empty()) cout << "Nice";
	else cout << "Sad";
	return 0;
}
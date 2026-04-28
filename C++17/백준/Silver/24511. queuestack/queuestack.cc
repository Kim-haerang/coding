#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> dq;
	int n, m; 
	bool flag[100001];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> flag[i];
	}

	int temp;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (!flag[i]) dq.push_front(temp);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> temp;
		dq.push_back(temp);
		cout << dq.front() << " ";
		dq.pop_front();
	}
	return 0;
}
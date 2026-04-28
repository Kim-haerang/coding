#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int title = 666, cnt = 0;
	while (true) {
		string s = to_string(title);
		if (s.find("666") != string::npos) cnt++;
		if (cnt == n) {
			cout << title << '\n';
			break;
		}
		title++;
	}
	return 0;
}
#include <iostream>
using namespace std;

int cnt;

int recursion(const string&s, int l, int r) {
	cnt++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const string& s) {
	cnt = 0;
	return recursion(s, 0, s.length() - 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		cout << isPalindrome(str) << " " << cnt << '\n';
	}
	return 0;
}
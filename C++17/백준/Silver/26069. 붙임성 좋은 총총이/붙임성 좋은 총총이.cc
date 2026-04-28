#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b;
	set<string> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == "ChongChong" || b == "ChongChong") {
			s.insert(a);
			s.insert(b);
		}
		else if (s.count(a) || s.count(b)) {
			s.insert(a);
			s.insert(b);
		}
	}
	cout << s.size();
	return 0;
}
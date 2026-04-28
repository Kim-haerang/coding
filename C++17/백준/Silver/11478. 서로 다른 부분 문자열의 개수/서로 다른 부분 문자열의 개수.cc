#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	set<string> M;
	
	for (int i = 0; i < str.size(); i++) {
		for (int j = i; j < str.size(); j++) {
			M.insert(str.substr(i, j - i + 1));
		}
	}
	cout << M.size();
	return 0;
}
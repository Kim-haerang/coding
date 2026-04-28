#include <iostream>
#include <string>
#include <cctype>
#include <map>
using namespace std;

map<string,int> name2num;
map<int, string> num2name;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		string name;
		int num = i;
		cin >> name;
		name2num[name] = num;
		num2name[num] = name;
	}
	
	for (int i = 0; i < m; i++) {
		string q;
		cin >> q;
		if (isdigit(q[0])) {
			int num = stoi(q);
			cout << num2name[num] << '\n';
		}
		else cout << name2num[q] << '\n';
	}
	return 0;
}
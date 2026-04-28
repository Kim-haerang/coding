#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<string> words;
	map<string, int> freq;

	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str.length() >= m) freq[str]++;
	}

	for (auto& p : freq) words.push_back(p.first);

	sort(words.begin(), words.end(), [&freq](const string& a, const string& b) {
		if (freq[a] != freq[b]) return freq[a] > freq[b];
		if (a.length() != b.length())return a.length() > b.length();
		return a < b;
		});
	for (auto& p : words) cout << p << '\n';
	return 0;
}
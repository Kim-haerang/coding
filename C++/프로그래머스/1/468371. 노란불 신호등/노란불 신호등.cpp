#include <string>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int solution(vector<vector<int>> signals) {
	long long limit = 1;
	for (auto& s : signals) {
		long long cycle = s[0] + s[1] + s[2];
		limit = lcm(limit, cycle);
	}

	for (long long t = 1; t <= limit; t++) {
		bool ok = true;
		for (auto& s : signals) {
			int G = s[0], Y = s[1], R = s[2];
			int cycle = G + Y + R;
			int phase = (t - 1) % cycle;
			if (!(phase >= G && phase < G + Y)) {
				ok = false;
				break;
			}
		}
		if (ok) return (int)t;
	}
	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	getline(cin, str);
	
	vector<vector<int>> signals;
	vector<int> v;

	int num = 0;
	bool isNum = false;

	for (char c : str) {
		if (isdigit(c)) {
			num = num * 10 + (c - '0');
			isNum = true;
		}
		else {
			if (isNum) {
				v.push_back(num);
				num = 0;
				isNum = false;
			}

			if (v.size() == 3) {
				signals.push_back(v);
				v.clear();
			}
		}
	}
	if (isNum) {
		v.push_back(num);
	}
	if (v.size() == 3) {
		signals.push_back(v);
	}

	cout << solution(signals) << '\n';
	return 0;
}
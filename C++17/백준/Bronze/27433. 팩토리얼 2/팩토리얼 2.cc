#include <iostream>
using namespace std;

long long fac(int x) {
	long long factorial = 1;
	for (int i = 1; i <= x; i++) factorial *= i;
	return factorial;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	cout << fac(n);
	return 0;
}
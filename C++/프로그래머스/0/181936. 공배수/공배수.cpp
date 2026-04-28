#include <iostream>
using namespace std;
int solution(int number, int n, int m) {
	int answer = (number % n == 0 && number % m == 0) ? 1 : 0;
	return answer;

}int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int number, n, m;
	cin >> number >> n >> m;
	
	cout << solution(number, n,m) << '\n';
	return 0;
}
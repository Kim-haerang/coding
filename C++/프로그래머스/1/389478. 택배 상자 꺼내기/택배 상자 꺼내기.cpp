#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(int n, int w, int num) {
    int row = (num - 1) / w;  
    int col;

    if (row % 2 == 0) {
        col = (num - 1) % w; 
    }
    else {
        col = w - 1 - (num - 1) % w; 
    }

    int answer = 0;
    int h = (n - 1) / w; 

    for (int r = row; r <= h; r++) {
        int box_num;
        if (r % 2 == 0) {
            box_num = r * w + col + 1;
        }
        else {
            box_num = r * w + (w - 1 - col) + 1;
        }
        if (box_num <= n) answer++;
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, w, num;
	cin >> n >> w >> num;
	cout << solution(n, w, num) << '\n';
	return 0;
}
#include <string>
#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int last_painted = 0;

    for (int s : section) {
        if (s > last_painted) {
            last_painted = s + m - 1;
            answer++;
        }
    }
    return answer;
}
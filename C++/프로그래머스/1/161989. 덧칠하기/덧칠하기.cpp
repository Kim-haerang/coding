#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    unordered_map <int, bool> key;

    for (int i = 1; i <= n; i++) key[i] = true;
    for (auto& s : section) key[s] = false;
    for (int i = 1; i <= key.size(); i++) {
        if (!(key[i])) {
            for (int j = i; j < i + m; j++) {
                key[j] = true;
            }
            answer++;
        }
    }
    return answer;
}
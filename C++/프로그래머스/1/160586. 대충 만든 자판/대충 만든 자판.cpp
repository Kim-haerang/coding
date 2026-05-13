#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map <char, int> M;

    for (auto& k : keymap) {
        for (int i = 0; i < k.size(); i++) {
            if (M[k[i]]) M[k[i]] = min(M[k[i]], i+1);
            else M[k[i]] = i+1;
        }
    }
    for (auto& t : targets) {
        int tmp = 0;
        for (auto& al : t) {
            if (M[al] == 0) { tmp = -1; break; }
            tmp += M[al];
        }
        answer.push_back(tmp);
    }
    return answer;
}
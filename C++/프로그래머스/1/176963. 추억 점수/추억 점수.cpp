#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    unordered_map<string, int> miss;
    for (int i = 0; i < name.size(); i++) {
        miss[name[i]] = yearning[i];
    }
    for (auto& p : photo) {
        int tmp = 0;
        for (auto& person : p) {
            tmp += miss[person];
        }
        answer.push_back(tmp);
    }
    return answer;
}
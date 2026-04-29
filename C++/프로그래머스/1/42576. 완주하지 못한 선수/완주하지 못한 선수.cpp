#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> m;
    for (auto& p : participant) m[p]++;
    for (auto& c : completion) m[c]--;
    for (auto& [name, cnt] : m) if (cnt) return name;

    return "";
}
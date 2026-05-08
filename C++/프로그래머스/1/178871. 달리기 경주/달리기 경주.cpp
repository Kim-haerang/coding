#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> order;
    for (int i = 0; i < players.size(); i++) {
        order[players[i]] = i;
    }
    for (auto& c : callings) {
        int tmp = order[c];
        swap(players[tmp], players[tmp - 1]);
        order[players[tmp]] = tmp;
        order[players[tmp - 1]] = tmp - 1;
    }
    return players;
}
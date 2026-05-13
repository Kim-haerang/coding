#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int sy, sx;
    int H = park.size(), W = park[0].size();

    for (int y = 0; y < H; y++)
        for (int x = 0; x < W; x++)
            if (park[y][x] == 'S') { sy = y; sx = x; }

    int dy[] = {-1, 1, 0, 0}; 
    int dx[] = {0, 0, -1, 1};
    map<char, int> dir = {{'N',0}, {'S',1}, {'W',2}, {'E',3}};

    for (auto& r : routes) {
        char way = r[0];
        int num = r[2] - '0';
        int d = dir[way];

        bool ok = true;
        for (int i = 1; i <= num; i++) {
            int ny = sy + dy[d] * i;
            int nx = sx + dx[d] * i;
            if (ny < 0 || ny >= H || nx < 0 || nx >= W || park[ny][nx] == 'X') {
                ok = false; 
                break;
            }
        }
        if (ok) {
            sy += dy[d] * num; 
            sx += dx[d] * num;
        }
    }
    return {sy, sx};
}
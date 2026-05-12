#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<string> storage, vector<string> requests) {
    int answer = 0;
    int n = storage.size();
    int m = storage[0].size();

    vector<string> grid;
    grid.push_back(string(m + 2, '.'));
    for (auto& row : storage) grid.push_back("." + row + ".");
    grid.push_back(string(m + 2, '.'));

    int dy[] = { -1, 1, 0, 0 };
    int dx[] = { 0, 0, -1, 1 };

    for (auto& r : requests) {
        char target = r[0];

        if (r.size() == 2) {
            for (auto& row : grid) {
                for (auto& c : row) {
                    if (c == target) c = '.';
                }
            }
        }
        else {
            queue<pair<int, int>> q;
            vector<vector<bool>> visited(n + 2, vector<bool>(m + 2, false));
            vector<pair<int, int>> toRemove;

            q.push({ 0, 0 });
            visited[0][0] = true;

            while (!q.empty()) {
                auto [y, x] = q.front();
                q.pop();

                for (int i = 0; i < 4; i++) {
                    int ny = y + dy[i];
                    int nx = x + dx[i];

                    if (ny < 0 || ny >= n + 2 || nx < 0 || nx >= m + 2) continue;
                    if (visited[ny][nx]) continue;

                    if (grid[ny][nx] == '.') {
                        visited[ny][nx] = true;
                        q.push({ ny, nx });
                    }
                    else if (grid[ny][nx] == target) {
                        visited[ny][nx] = true;
                        toRemove.push_back({ ny, nx });
                    }
                }
            }
            for (auto [y, x] : toRemove) {
                grid[y][x] = '.';
            }
        }
    }
    for (auto& row : grid) {
        for (char c : row) {
            if (c != '.') answer++;
        }
    }
    return answer;
}
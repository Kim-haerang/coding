#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> wallpaper) {
    int H = wallpaper.size();
    int W = wallpaper[0].size();

    int mx = 1000000, my = 1000000;
    int Mx = -1000000, My = -1000000;
    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            if (wallpaper[y][x] == '#') {
                mx = min(mx, x); my = min(my, y);
                Mx = max(Mx, x); My = max(My, y);
            }
        }
    }
    return { my, mx, My+1, Mx+1 };
}
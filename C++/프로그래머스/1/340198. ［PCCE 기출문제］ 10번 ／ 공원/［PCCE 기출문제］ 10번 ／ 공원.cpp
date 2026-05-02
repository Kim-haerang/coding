#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlace(const vector<vector<string>>& park, int r, int c, int size) {
    for (int i = r; i < r + size; i++) {
        for (int j = c; j < c + size; j++) {
            if (park[i][j] != "-1") return false;
        }
    }
    return true;
}

int solution(vector<int> mats, vector<vector<string>> park) {
    int answer = -1;
    int row = park.size();
    int col = park[0].size();

    sort(mats.rbegin(), mats.rend());

    for (int size : mats) {
        for (int i = 0; i + size <= row; i++) {
            for (int j = 0; j + size <= col; j++) {
                if (canPlace(park, i, j, size)) {
                    return size;
                }
            }
        }
    }

    return answer;
}
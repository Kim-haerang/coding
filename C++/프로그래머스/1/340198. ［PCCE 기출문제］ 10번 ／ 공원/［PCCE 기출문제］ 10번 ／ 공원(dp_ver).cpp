//각 칸에서 시작하는 게 아니라, 해당 칸을 오른쪽 아래 꼭짓점으로 하는 최대 정사각형 크기를 저장하는 방식

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> mats, vector<vector<string>> park) {
    int row = park.size();
    int col = park[0].size();

    vector<vector<int>> dp(row, vector<int>(col, 0));
    int maxSize = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (park[i][j] == "-1") {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                }

                maxSize = max(maxSize, dp[i][j]);
            }
        }
    }

    sort(mats.rbegin(), mats.rend());

    for (int m : mats) {
        if (m <= maxSize) return m;
    }

    return -1;
}

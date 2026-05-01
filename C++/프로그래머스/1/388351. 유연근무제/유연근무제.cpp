#include <vector>
using namespace std;

int toMin(int t) {
    int h = t / 100, m = t % 100;
    return h * 60 + m;
}

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;

    for (int i = 0; i < schedules.size(); i++) {
        bool pass = true;

        int limit = toMin(schedules[i]) + 10;

        for (int j = 0; j < 7; j++) {
            int day = (startday - 1 + j) % 7 + 1;

            if (day == 6 || day == 7) continue;

            if (toMin(timelogs[i][j]) > limit) {
                pass = false;
                break;
            }
        }
        if (pass) answer++;
    }
    return answer;
}
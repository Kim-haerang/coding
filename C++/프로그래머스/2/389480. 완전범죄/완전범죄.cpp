#include <string>
#include <vector>
#include <climits>

using namespace std;

int solution(vector<vector<int>> info, int n, int m) {
    vector<int> dp(m, INT_MAX);
    dp[0] = 0;

    for (auto& item : info) {
        vector<int> next(m, INT_MAX);
        for (int trace_b = 0; trace_b < m; trace_b++) {
            if (dp[trace_b] == INT_MAX) continue;

            if (dp[trace_b] + item[0] < n)
                next[trace_b] = min(next[trace_b], dp[trace_b] + item[0]);

            if (trace_b + item[1] < m)
                next[trace_b + item[1]] = min(next[trace_b + item[1]], dp[trace_b]);
        }
        dp = next;
    }
    int a_min = INT_MAX;
    for (int i = 0; i < m; i++) {
        if (dp[i] != INT_MAX) 
            a_min = min(a_min, dp[i]);
    }
    if(a_min == INT_MAX) return -1;
    return a_min;
}
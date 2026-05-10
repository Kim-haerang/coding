#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> players, int m, int k){
    int answer = 0;
    queue<int> q;
    for (int i = 0; i <24; i++){
        while (!q.empty() && i - q.front() >= k) q.pop();
        while (players[i] >= (q.size() + 1) * m){
            answer++;
            q.push(i);
        }
    }
    return answer;
}

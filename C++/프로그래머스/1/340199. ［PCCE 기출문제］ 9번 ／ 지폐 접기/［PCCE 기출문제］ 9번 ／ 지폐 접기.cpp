#include <string>
#include <vector>
using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;

    while (true) {
        int maxv = max(bill[0], bill[1]);
        int minv = min(bill[0], bill[1]);

        if ((maxv <= wallet[0] && minv <= wallet[1]) ||
            (maxv <= wallet[1] && minv <= wallet[0]))
            break;

        if (bill[0] >= bill[1]) bill[0] /= 2;
        else bill[1] /= 2;

        answer++;
    }

    return answer;
}
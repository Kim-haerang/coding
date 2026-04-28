#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    stack<long long> s;
    while (n--) {
        long long m;
        cin >> m;
        if (m == 0) s.pop();
        else s.push(m);
    }

    long long cnt = 0;
    while (!s.empty()) {
        cnt += s.top();
        s.pop();
    }

    cout << cnt << '\n';
    return 0;
}
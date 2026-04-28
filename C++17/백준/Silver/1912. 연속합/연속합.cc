#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x;
    cin >> x;

    int current = x;
    int max_val = x;

    for (int i = 1; i < n; i++) {
        cin >> x;
        current = max(x, current + x);
        max_val = max(max_val, current);
    }

    cout << max_val;
    return 0;
}
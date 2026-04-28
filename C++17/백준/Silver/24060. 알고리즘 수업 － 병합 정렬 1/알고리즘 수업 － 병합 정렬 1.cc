#include <iostream>
using namespace std;

int A[500001];
int tmp[500001];
int K, cnt = 0, ans = -1;

void merge(int p, int q, int r) {
    int i = p, j = q + 1, t = 1;
    while (i <= q && j <= r) {
        if (A[i] <= A[j]) tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
        cnt++;
        if (cnt == K) ans = tmp[t - 1];
    }
    while (i <= q) {
        tmp[t++] = A[i++];
        cnt++;
        if (cnt == K) ans = tmp[t - 1];
    }
    while (j <= r) {
        tmp[t++] = A[j++];
        cnt++;
        if (cnt == K) ans = tmp[t - 1];
    }
    i = p; t = 1;
    while (i <= r) A[i++] = tmp[t++];
}

void merge_sort(int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n >> K;
    for (int i = 1; i <= n; i++) cin >> A[i];
    merge_sort(1, n);
    cout << ans << '\n';
    return 0;
}
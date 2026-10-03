#include <bits/stdc++.h>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, v;
    cin >> n >> v;

    // 1-indexed（1番目からN番目）で扱うため、サイズを n + 1 にする
    vector<long long> w(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> w[i];
    }

    long long max_happiness = 0;

    // 相異なる3つのトッピングの組み合わせを全探索 (1 <= i < j < k <= N)
    for (int i = 1; i <= n - 2; ++i) {
        for (int j = i + 1; j <= n - 1; ++j) {
            for (int k = j + 1; k <= n; ++k) {
                // 価格の総和が V 以下であるか判定
                if (i + j + k <= v) {
                    long long current_happiness = w[i] + w[j] + w[k];
                    max_happiness = max(max_happiness, current_happiness);
                }
            }
        }
    }

    cout << max_happiness << "\n";

    return 0;
}

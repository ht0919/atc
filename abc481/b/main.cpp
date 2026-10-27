#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, K;
    if (!(cin >> N >> K)) return 0;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    int ans = 0;
    // 1. 頂点そのものが y = K 上にあるかをカウント
    for (int i = 0; i < N; ++i) {
      if (A[i] == K) {
        ans++;
      }
    }
    // 2. 線分の途中（端点を含まない）で y = K をまたぐかをカウント
    for (int i = 0; i < N - 1; ++i) {
        int min_y = min(A[i], A[i+1]);
        int max_y = max(A[i], A[i+1]);
        if (min_y < K && K < max_y) ans++;
    }
    cout << ans << "\n";
    return 0;
}
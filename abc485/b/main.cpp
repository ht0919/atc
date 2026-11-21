#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    if (!(cin >> N >> M)) return 0;
    vector<string> S(N);
    for (int i = 0; i < N; ++i) {
        cin >> S[i];
    }
    // 蛇口が詰まっているか確認
    for (int i = 0; i < N; ++i) {
        bool all_x = true;
        for (int j = 0; j < M; ++j) {
            if (S[i][j] == 'o') {
                all_x = false;
                break;
            }
        }
        if (all_x) {
            cout << "Faucet " << i + 1 << endl;
            return 0;
        }
    }
    // 排水管が詰まっているか確認
    for (int j = 0; j < M; ++j) {
        bool all_x = true;
        for (int i = 0; i < N; ++i) {
            if (S[i][j] == 'o') {
                all_x = false;
                break;
            }
        }
        if (all_x) {
            cout << "Drain " << j + 1 << endl;
            return 0;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> players(N);
    for (int i = 0; i < N; ++i) {
        cin >> players[i];
    }

    for (int i = 0; i < M; ++i) {
        int X, Y;
        cin >> X >> Y;
        // 出場中の選手を削除
        players.erase(std::remove(players.begin(), players.end(), X),
            players.end());
        // 控えの選手を追加
        players.push_back(Y);
    }
    // 結果を昇順に並べ、出力
    std::sort(players.begin(), players.end());
    for (size_t i = 0; i < players.size(); ++i) {
        if (i) std::cout << ' ';
        std::cout << players[i];
    }
    std::cout << '\n';
    return 0;
}
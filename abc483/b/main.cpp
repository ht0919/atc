#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, Q;
    if (!(cin >> N >> Q)) return 0;

    // 初期状態のカード（1からNまで表向き＝正の数）
    vector<int> cards(N);
    for (int i = 0; i < N; ++i) {
        cards[i] = i + 1;
    }

    // Q回の操作をシミュレーション
    for (int i = 0; i < Q; ++i) {
        int K;
        cin >> K;

        // 1. 上から K 枚の順序を上下逆にする（左右反転）
        // cards.begin() から cards.begin() + K までの範囲を反転
        reverse(cards.begin(), cards.begin() + K);

        // 2. 上から K 枚の表裏を反転する（符号をマイナスにする）
        for (int j = 0; j < K; ++j) {
            cards[j] = -cards[j];
        }
    }

    // 結果の出力
    for (int i = 0; i < N; ++i) {
        cout << cards[i] << "\n";
    }

    return 0;
}

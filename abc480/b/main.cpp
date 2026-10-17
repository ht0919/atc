#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入出力の高速化
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    // 候補者の名前を入力
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    // 各候補者の得票数を管理する配列（0で初期化）
    vector<int> votes(n, 0);

    // 投票用紙を1枚ずつ処理
    for (int j = 0; j < m; ++j) {
        string t;
        cin >> t;

        int exact_match_idx = -1;
        vector<int> one_diff_candidates;

        for (int i = 0; i < n; ++i) {
            // 長さが異なる場合は、完全一致も1文字違いも有り得ない
            if (s[i].length() != t.length()) {
                continue;
            }

            int diff_count = 0;
            for (size_t k = 0; k < t.length(); ++k) {
                if (s[i][k] != t[k]) {
                    diff_count++;
                    if (diff_count > 1) break; // 2文字以上違ったらそれ以上数えない
                }
            }

            if (diff_count == 0) {
                exact_match_idx = i;
                break; // 完全一致が見つかったら、これ以上他の候補者を探す必要はない
            } else if (diff_count == 1) {
                one_diff_candidates.push_back(i);
            }
        }

        // 票の割り振り判定
        if (exact_match_idx != -1) {
            // 完全一致する候補者がいた場合
            votes[exact_match_idx]++;
        } else if (one_diff_candidates.size() == 1) {
            // 1文字書き換えで一致する候補者が「ちょうど1人」だった場合
            votes[one_diff_candidates[0]]++;
        }
    }

    // 結果を出力
    for (int i = 0; i < n; ++i) {
        cout << votes[i] << "\n";
    }

    return 0;
}

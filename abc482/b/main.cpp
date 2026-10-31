#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> S(5);
    for (int i=0; i<5; ++i) cin >> S[i];
    int min_needed = 5;
    // 1. 横方向（各行）のチェック
    for (int i = 0; i < 5; ++i) {
        int count_dot = 0;
        for (int j = 0; j < 5; ++j) {
            if (S[i][j] == '.') count_dot++;
        }
        min_needed = min(min_needed, count_dot);
    }
    // 2. 縦方向（各列）のチェック
    for (int j = 0; j < 5; ++j) {
        int count_dot = 0;
        for (int i = 0; i < 5; ++i) {
            if (S[i][j] == '.') count_dot++;
        }
        min_needed = min(min_needed, count_dot);
    }
    // 3. 斜め方向（左上から右下）のチェック
    int diag1_dot = 0;
    for (int i = 0; i < 5; ++i) {
        if (S[i][i] == '.') diag1_dot++;
    }
    min_needed = min(min_needed, diag1_dot);
    // 4. 斜め方向（右上から左下）のチェック
    int diag2_dot = 0;
    for (int i = 0; i < 5; ++i) {
        if (S[i][4 - i] == '.') diag2_dot++;
    }
    min_needed = min(min_needed, diag2_dot);
    // 最小値を出力
    cout << min_needed << endl;
    return 0;
}
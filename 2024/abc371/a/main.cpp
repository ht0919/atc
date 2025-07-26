#include <bits/stdc++.h>
using namespace std;

int main() {
    char S_AB, S_AC, S_BC;
    
    // 入力を受け取る
    cin >> S_AB >> S_AC >> S_BC;
    
    // 年齢の順序を判定する
    if (S_AB == '<' && S_AC == '<' && S_BC == '<') {
        // A < B < C
        cout << "B" << endl;
    } else if (S_AB == '<' && S_AC == '<' && S_BC == '>') {
        // A < C < B
        cout << "C" << endl;
    } else if (S_AB == '>' && S_AC == '<' && S_BC == '<') {
        // B < A < C
        cout << "A" << endl;
    } else if (S_AB == '>' && S_AC == '>' && S_BC == '<') {
        // B < C < A
        cout << "C" << endl;
    } else if (S_AB == '<' && S_AC == '>' && S_BC == '>') {
        // C < A < B
        cout << "A" << endl;
    } else if (S_AB == '>' && S_AC == '>' && S_BC == '>') {
        // C < B < A
        cout << "B" << endl;
    }
    return 0;
}
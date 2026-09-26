#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; long long D; cin>>N>>D;
    vector<long long> X(N);
    for (int i = 0; i < N; ++i) cin>>X[i];

    vector<int> isolated_people;
    for (int i=0; i<N; ++i) {
        bool is_isolated = true;
        for (int j=0; j<N; ++j) {
            if (i == j) continue; // 自分自身とは比較しない
            // 他の人との距離が D 未満であれば「一線を画す」人ではない
            if (abs(X[i] - X[j]) < D) {
                is_isolated = false;
                break;
            }
        }
        // 条件を満たしていれば、人番号 (1-indexed) を記録
        if (is_isolated) {
            isolated_people.push_back(i + 1);
        }
    }
    // 結果の出力
    cout << isolated_people.size() << "\n";
    for (size_t i=0; i<isolated_people.size(); ++i) {
        cout<<isolated_people[i]<<(i+1==isolated_people.size() ? "" : " ");
    }
    cout<<"\n";
    return 0;
}

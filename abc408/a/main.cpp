#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,S; cin>>N>>S;
    vector<int> T(N);
    for (int i=0; i<N; i++) {
        cin>>T[i];
    }
    int lastTapTime=0; // 初回肩叩きは現在時刻
    for (int i=0; i<N; i++) {
        if (T[i] - lastTapTime > S+0.5) {
            cout<<"No"<<endl;
            return 0;
        }
        lastTapTime=T[i]; // 最後の肩叩き時間を更新
    }
    cout<<"Yes"<<endl;
    return 0;
}
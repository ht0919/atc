#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> T(N), V(N);
    for (int i = 0; i < N; ++i) {
        cin >> T[i] >> V[i];
    }
    
    int currentWater = 0;
    int lastTime = 0;
    
    for (int i = 0; i < N; ++i) {
        // 時刻T[i]までの時間経過による水の減少を考慮
        currentWater -= (T[i] - lastTime);
        if (currentWater < 0) {
            currentWater = 0;
        }
        // 水を追加
        currentWater += V[i];
        // 現在の時刻を更新
        lastTime = T[i];
    }
    
    // 最終的な水の量を出力
    cout << currentWater << endl;
    
    return 0;
}
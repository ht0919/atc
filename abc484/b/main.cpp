#include <bits/stdc++.h>
using namespace std;
int main() {
    int K; cin>>K;
    vector<int> A(K);
    bool has_nine = false;
    int min_ball = 10;

    for (int i=0; i<K; ++i) {
        cin>>A[i];
        if (A[i] == 9) {
            has_nine = true;
        }
        if (A[i] < min_ball) {
            min_ball = A[i];
        }
    }
    if (!has_nine) {
        cout<< -1 <<endl;
    } else {
        cout<< min_ball <<endl;
    }
    return 0;
}
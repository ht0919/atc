#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,M,ans; cin>>N>>M;
    for(ans=0; M>0; ans++) {
        M = N % M;
    }
    cout << ans << endl;
    return 0;
}
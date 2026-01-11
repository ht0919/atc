#include <bits/stdc++.h>
using namespace std;
int main() {
    int X,C; cin>>X>>C;
    int ans=0;
    while (X>0) {
        X -= (1000 + C);
        if (X < 0) break;
        ans += 1000;
    }
    cout<<ans<<endl;
    return 0;
}
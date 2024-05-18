#include <bits/stdc++.h>
using namespace std;

int main() {
    int H; cin>>H;
    int ans = 0;
    int now = 0;
    while (now <= H) {
        now += 1 << ans;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
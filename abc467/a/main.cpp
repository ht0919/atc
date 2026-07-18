#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long H, W; cin>>H>>W;
    string ans="No";
    if (10000 * W >= 25 * H * H) ans="Yes";
    cout<<ans<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int H,B,ans=0; cin>>H>>B;
    if (H > B) {
        ans = H - B;
    }
    cout<<ans<<endl;
    return 0;
}
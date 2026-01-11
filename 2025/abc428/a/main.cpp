#include <bits/stdc++.h>
using namespace std;
int main() {
    int S,A,B,X; cin>>S>>A>>B>>X;
    int ans=0;
    while (X>0) {
        for (int i=A; i>0; i--) {
            X -= 1;
            if (X<0) break;
            ans += S;
        }
        for (int i=B; i>0; i--) {
            X -= 1;
            if (X<0) break;
        }
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int conv(int A, int B, int C) {
    return A*100 + B*10 + C;
}
int main() {
    int A,B,C; cin>>A>>B>>C;
    int ans = 0;
    ans = max({
        conv(A,B,C),
        conv(A,C,B),
        conv(B,A,C),
        conv(B,C,A),
        conv(C,A,B),
        conv(C,B,A)
    });
    cout<<ans<<endl;
    return 0;
}
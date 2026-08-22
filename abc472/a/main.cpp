#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S; cin>>S;
    string ans="";
    for (int i=0; i<(int)size(S); i++) {
        if (S[i]=='A')  ans += S[i];
        else ans += '.';
    }
    cout<<ans<<endl;
    return 0;
}

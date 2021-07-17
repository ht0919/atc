#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; string S; cin>>N>>S;
    string ans="Takahashi";
    for (int i=0; i<S.size(); i++) {
        if (S[i]=='1') {
            if (i%2!=0) ans="Aoki";
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
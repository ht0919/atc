#include <bits/stdc++.h>
using namespace std;
int main() {
    string S; cin>>S;
    int ans = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'i' || S[i] == 'j' ) {
            ans++;
        }        
    }
    cout<<ans<<endl;
    return 0;
}
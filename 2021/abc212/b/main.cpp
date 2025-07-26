#include <bits/stdc++.h>
using namespace std;
int main() {
    string S; cin>>S;
    int X[4];
    for (int i=0; i<4; i++) {
        X[i] = int(S[i]-'0');
    }
    string ans="Strong";
    if (X[0]==X[1] && X[1]==X[2] && X[2]==X[3]) {
        ans="Weak";
    } else {
        int cnt=0;
        for (int i=1; i<4; i++) {
            if (X[i-1]+1==(X[i])) {
                cnt++;
            } else if (X[i-1]==9 && X[i]==0) {
                cnt++;
            }
        }        
        if (cnt==3) ans="Weak";
    }
    std::cout<<ans<<endl;
    return 0;
}
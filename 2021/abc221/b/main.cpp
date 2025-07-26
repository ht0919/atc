#include <bits/stdc++.h>
using namespace std;
int main() {
    string S,T,ans="No"; cin>>S>>T;
    if (S==T) {
        ans="Yes";
    } else {
        for (int i=0; i<S.size()-1; i++) {
            char w=S[i]; S[i]=S[i+1]; S[i+1]=w;
            if (S==T) {
                ans="Yes";
                break;
            }
            w=S[i]; S[i]=S[i+1]; S[i+1]=w;
        }
    }
    cout<<ans<<endl;
    return 0;
}
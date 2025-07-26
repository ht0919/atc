#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,P,ans=0; cin>>N>>P;
    for (int i=0; i<N; i++) {
        int tmp; cin>>tmp;
        if (tmp<P) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
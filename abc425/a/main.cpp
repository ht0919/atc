#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,ans=0; cin>>N;
    for (int i=1; i<=N; i++) {
        ans += pow((-1),i) * pow(i,3);
    }
    cout<<ans<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,K,A; cin>>N>>K>>A;
    int ans = (K+(A-1)) % N;
    if (ans==0) ans = N;
    cout<<ans<<endl;
    return 0;
}
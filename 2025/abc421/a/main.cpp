#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,X; cin>>N;
    vector<string> S(N);
    for (int i=0; i<N; i++) cin>>S[i];
    string Y,ans="No";
    cin>>X>>Y;
    if (S[X-1]==Y) ans="Yes";
    cout<<ans<<endl;
    return 0;
}
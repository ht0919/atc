#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; string S,ans="No"; cin>>N>>S;
    if (S[N-1]=='o') ans="Yes";
    cout<<ans<<endl;
    return 0;
}
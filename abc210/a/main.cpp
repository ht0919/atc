#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,A,X,Y,ans=0; cin>>N>>A>>X>>Y;
    if (A>=N) {
        ans = N * X;
    } else {
        ans = A * X + (N-A) * Y;
    }
    cout<<ans<<endl;
    return 0;
}
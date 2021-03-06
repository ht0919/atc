#include <bits/stdc++.h>
using namespace std;
int N,A[1000],B[1000];
int main () {
    cin>>N;
    for (int i=0; i<N; i++) cin>>A[i]>>B[i];
    int ans=1e9;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            ans = min(ans, i==j ? A[i]+B[j] : max(A[i],B[j]));
        }
    }
    cout<<ans<<endl;
    return 0;
}
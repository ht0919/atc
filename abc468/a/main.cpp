#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;cin>>N;
    int A[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }
    int ans=0;
    for(int i=0;i<N-2;i++) {
        if (A[i]<A[i+1] && A[i+1]>A[i+2]) {
            ans+=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
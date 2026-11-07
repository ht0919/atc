#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,ans=0; cin>>N;
    if (N%2==0) ans=N/2;
    else ans=(N+1)/2;
    cout<<ans<<endl;
    return 0;
}

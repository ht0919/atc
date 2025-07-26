#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin>>N;
    int a[N], b[N];
    for (int i=0; i<N-1; i++) cin>>a[i]>>b[i];
    int cent=0;
    if      (a[0]==a[1]) cent=a[0];
    else if (a[0]==b[1]) cent=a[0];
    else if (b[0]==a[1]) cent=b[0];
    else if (b[0]==b[1]) cent=b[0];
    else {
        cout<<"No"<<endl;
        return 0;
    }
    string ans="Yes";
    for (int i=2; i<N-1; i++) {
        if (a[i]==cent || b[i]==cent) {
            ;
        } else {
            ans="No";
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
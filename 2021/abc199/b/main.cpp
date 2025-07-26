#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin>>N;
    int A[N],B[N],maximum=0;
    for (int i=0; i<N; i++) cin>>A[i];
    for (int i=0; i<N; i++) {
        cin>>B[i];
        maximum=max(maximum,B[i]);
    }
    int cnt=0;
    for (int i=1; i<=maximum; i++) {
        bool flg=true;
        for (int j=0; j<N; j++) {
            if (!(i>=A[j] && i<=B[j])) {
                flg=false;
                break;
            }
        }
        if (flg) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
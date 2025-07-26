#include <bits/stdc++.h>
using namespace std;
int N;
long S,T;
int main() {
    cin>>N;
    for (int i=0; i<N; i++) {
        long A; cin>>A;
        S += A*A*N;
        T += A;
    }
    S -= T*T;
    cout<<S<<endl;
    return 0;
}
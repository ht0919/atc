#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,i=0;
    string S,T="";
    cin>>N>>S;
    for (; i<N; i++) {
        if (S[i] == 'o') continue;
        else break;
    }
    for (; i<N; i++) {
        T = T + S[i];
    }
    cout<<T<<endl;
    return 0;
}
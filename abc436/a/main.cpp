#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; string S, o = "";
    cin>>N>>S;
    int l = N - S.length();
    for (int i = 0; i < l; i++) {
        o += "o";
    }
    cout<<o<<S<<endl;
    return 0;
}
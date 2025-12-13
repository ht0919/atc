#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; string S;
    cin>>N>>S;
    int l = N - S.length();
    string o = string(l,'o');
    cout<<o<<S<<endl;
    return 0;
}
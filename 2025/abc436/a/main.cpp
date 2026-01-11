#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; string S; cin>>N>>S;
    cout<<string(N-S.length(),'o')<<S<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin>>N;
    set<string> name;
    for (int i=0; i<N; i++) {
        string S,T,U; cin>>S>>T;
        U = S+' '+T;
        name.insert(U);
    }
    string ans="Yes";
    if (name.size()==N) ans="No"; 
    cout<<ans<<endl;
    return 0;
}
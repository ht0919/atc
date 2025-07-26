#include <bits/stdc++.h>
using namespace std;
int main() {
    int S,T,X; cin>>S>>T>>X;
    string ans="No";
    if (S<T) {
        if (X>=S && X<T) ans="Yes";
    } else {
        if (X>=S || X<T) ans="Yes";
    }
    cout<<ans<<endl;
    return 0;
}
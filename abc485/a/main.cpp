#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B; cin>>A>>B;
    string ans="No";
    if (A<0 && B<0 || A>0 && B>0) ans="Yes";
    cout<<ans<<endl;
    return 0;
}
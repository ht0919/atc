#include <bits/stdc++.h>
using namespace std;
int main() {
    int A,B; cin>>A>>B;
    string ans="No";
    if (A > B * 2/3) ans="Yes";
    cout<<ans<<endl;
    return 0;
}
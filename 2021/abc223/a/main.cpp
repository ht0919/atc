#include <bits/stdc++.h>
using namespace std;
int main() {
    int X; cin>>X;
    string ans="No";
    if (X%100==0 && X>0) ans="Yes";
    cout<<ans<<endl;
    return 0;
}
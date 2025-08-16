#include <bits/stdc++.h>
using namespace std;
int main() {
    string S,ans="Unknown"; cin>>S;
    if (S=="red") {
        ans = "SSS";
    } else if (S=="blue") {
        ans = "FFF";
    } else if (S=="green") {
        ans = "MMM";
    }
    cout << ans << endl;
    return 0;
}
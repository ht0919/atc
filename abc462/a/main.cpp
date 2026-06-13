#include <bits/stdc++.h>
using namespace std;
int main() {
    string S,ans="";
    cin >> S;
    for (char c : S) {
        if (c >= '0' && c <= '9') ans += c;
    }
    cout << ans << endl;
    return 0;
}

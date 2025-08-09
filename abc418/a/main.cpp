#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,l;
    string s,ans="No";
    cin >> n >> s;
    l = s.length();
    if (l>=3 && s[l-3]=='t' && s[l-2]=='e' && s[l-1]=='a') {
        ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}